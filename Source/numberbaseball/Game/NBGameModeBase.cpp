// Fill out your copyright notice in the Description page of Project Settings.


#include "Game/NBGameModeBase.h"
#include "NBGameStateBase.h"
#include "Player/NBPlayerController.h"
#include "EngineUtils.h"
#include "Player/NBPlayerState.h"

void ANBGameModeBase::OnPostLogin(AController* NewPlayer)
{
	Super::OnPostLogin(NewPlayer);

	/*
	ANBGameStateBase* NBGameStateBase = GetGameState<ANBGameStateBase>();
	if (IsValid(NBGameStateBase) == true)
	{
		NBGameStateBase->MulticastRPCBroadcastLoginMessage(TEXT("XXXXXXX"));
	}

	ANBPlayerController* NBPlayerController = Cast<ANBPlayerController>(NewPlayer);
	if (IsValid(NBPlayerController) == true)
	{
		AllPlayerControllers.Add(NBPlayerController);
	}
	*/

	ANBPlayerController* NBPlayerController = Cast<ANBPlayerController>(NewPlayer);
	if (IsValid(NBPlayerController) == true)
	{

		NBPlayerController->NotificationText = FText::FromString(TEXT("Connected to the game server."));
		AllPlayerControllers.Add(NBPlayerController);

		ANBPlayerState* NBPS = NBPlayerController->GetPlayerState<ANBPlayerState>();
		if (IsValid(NBPS) == true)
		{
			NBPS->PlayerNameString = TEXT("Player") + FString::FromInt(AllPlayerControllers.Num());
		}

		ANBGameStateBase* NBGameStateBase = GetGameState<ANBGameStateBase>();
		if (IsValid(NBGameStateBase) == true)
		{
			NBGameStateBase->MulticastRPCBroadcastLoginMessage(NBPS->PlayerNameString);
		}
	}

}

FString ANBGameModeBase::GenerateSecretNumber()
{
	TArray<int32> Numbers;
	for (int32 i = 1; i <= 9; ++i)
	{
		Numbers.Add(i);
	}

	FMath::RandInit(FDateTime::Now().GetTicks());
	Numbers = Numbers.FilterByPredicate([](int32 Num) { return Num > 0; });

	FString Result;
	for (int32 i = 0; i < 3; ++i)
	{
		int32 Index = FMath::RandRange(0, Numbers.Num() - 1);
		Result.Append(FString::FromInt(Numbers[Index]));
		Numbers.RemoveAt(Index);
	}

	return Result;
}

bool ANBGameModeBase::IsGuessNumberString(const FString& InNumberString)
{
	bool bCanPlay = false;

	do {

		if (InNumberString.Len() != 3)
		{
			break;
		}

		bool bIsUnique = true;
		TSet<TCHAR> UniqueDigits;
		for (TCHAR C : InNumberString)
		{
			if (FChar::IsDigit(C) == false || C == '0')
			{
				bIsUnique = false;
				break;
			}

			bool bAlreadyInSet = false;
			UniqueDigits.Add(C, &bAlreadyInSet);
			if (bAlreadyInSet == true)
			{
				bIsUnique = false;
				break;
			}
		}

		if (bIsUnique == false)
		{
			break;
		}

		bCanPlay = true;

	} while (false);

	return bCanPlay;
}

FString ANBGameModeBase::JudgeResult(const FString& InSecretNumberString, const FString& InGuessNumberString)
{
	int32 StrikeCount = 0, BallCount = 0;

	for (int32 i = 0; i < 3; ++i)
	{
		if (InSecretNumberString[i] == InGuessNumberString[i])
		{
			StrikeCount++;
		}
		else
		{
			FString PlayerGuessChar = FString::Printf(TEXT("%c"), InGuessNumberString[i]);
			if (InSecretNumberString.Contains(PlayerGuessChar))
			{
				BallCount++;
			}
		}
	}

	if (StrikeCount == 0 && BallCount == 0)
	{
		return TEXT("OUT");
	}

	return FString::Printf(TEXT("%dS%dB"), StrikeCount, BallCount);
}

void ANBGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	SecretNumberString = GenerateSecretNumber();
}

void ANBGameModeBase::PrintChatMessageString(ANBPlayerController* InChattingPlayerController, const FString& InChatMessageString)
{

	if (IsValid(InChattingPlayerController) == false)
	{
		return;
	}

	ANBPlayerState* NBPS = InChattingPlayerController->GetPlayerState<ANBPlayerState>();
	if (IsValid(NBPS) == false)
	{
		return;
	}

	if (NBPS->HasRemainingGuess() == false)
	{
		const FString Notice = NBPS->GetPlayerInfoString() + TEXT(" 기회를 모두 사용했습니다.");
		InChattingPlayerController->ClientRPCPrintChatMessageString(Notice);
		return;
	}

	FString GuessNumberString = InChatMessageString.TrimStartAndEnd();

	FString ErrorMessage;

	if (ValidateGuessNumberString(GuessNumberString, ErrorMessage) == true)
	{
		FString JudgeResultString = JudgeResult(SecretNumberString, GuessNumberString);

		IncreaseGuessCount(InChattingPlayerController);

		FString CombinedMessageString = NBPS->PlayerNameString + TEXT(": ") + GuessNumberString + TEXT(" -> ") + JudgeResultString + TEXT(" ") + NBPS->GetGuessCountString();
		for (TActorIterator<ANBPlayerController> It(GetWorld()); It; ++It)
		{
			ANBPlayerController* NBPlayerController = *It;
			if (IsValid(NBPlayerController) == true)
			{
				NBPlayerController->ClientRPCPrintChatMessageString(CombinedMessageString);
			}
		}

		int32 StrikeCount = FCString::Atoi(*JudgeResultString.Left(1));
		JudgeGame(InChattingPlayerController, StrikeCount);
	}
	else
	{
		if (IsValid(InChattingPlayerController) == true)
		{
			const FString Notice = TEXT("다시 입력하세요 (") + ErrorMessage + TEXT(")");
			InChattingPlayerController->ClientRPCPrintChatMessageString(Notice);
		}
	}
}

void ANBGameModeBase::IncreaseGuessCount(ANBPlayerController* InChattingPlayerController)
{
	ANBPlayerState* NBPS = InChattingPlayerController->GetPlayerState<ANBPlayerState>();
	if (IsValid(NBPS) == true)
	{
		NBPS->CurrentGuessCount++;
	}
}

void ANBGameModeBase::ResetGame()
{
	SecretNumberString = GenerateSecretNumber();

	for (const auto& NBPlayerController : AllPlayerControllers)
	{
		ANBPlayerState* NBPS = NBPlayerController->GetPlayerState<ANBPlayerState>();
		if (IsValid(NBPS) == true)
		{
			NBPS->CurrentGuessCount = 0;
		}
	}
}

void ANBGameModeBase::JudgeGame(ANBPlayerController* InChattingPlayerController, int InStrikeCount)
{
	if (3 == InStrikeCount)
	{
		ANBPlayerState* NBPS = InChattingPlayerController->GetPlayerState<ANBPlayerState>();
		if (IsValid(NBPS) == false)
		{
			return;
		}

		const FString WinMessage = NBPS->PlayerNameString + TEXT(" has won the game.");
		for (const auto& NBPlayerController : AllPlayerControllers)
		{
			if (IsValid(NBPlayerController) == true)
			{
				NBPlayerController->NotificationText = FText::FromString(WinMessage);
			}
		}

		ResetGame(); 
		return;
	}
	else
	{
		bool bIsDraw = true;
		for (const auto& NBPlayerController : AllPlayerControllers)
		{
			if (IsValid(NBPlayerController) == false)
			{
				continue;
			}

			ANBPlayerState* NBPS = NBPlayerController->GetPlayerState<ANBPlayerState>();
			if (IsValid(NBPS) == true && NBPS->HasRemainingGuess() == true)
			{
				bIsDraw = false;
				break;
			}
		}

		if (bIsDraw == true)
		{
			for (const auto& NBPlayerController : AllPlayerControllers)
			{
				if (IsValid(NBPlayerController) == true)
				{
					NBPlayerController->NotificationText = FText::FromString(TEXT("Draw..."));
				}
			}

			ResetGame();
		}
	}
}


bool ANBGameModeBase::ValidateGuessNumberString(const FString& InNumberString, FString& OutErrorMessage) const
{

	if (InNumberString.Len() != 3)
	{
		OutErrorMessage = TEXT("3자리 숫자를 입력해야 합니다.");
		return false;
	}

	TSet<TCHAR> UniqueDigits;
	for (const TCHAR C : InNumberString)
	{

		if (FChar::IsDigit(C) == false || C == TEXT('0'))
		{
			OutErrorMessage = TEXT("1~9 사이의 숫자만 입력할 수 있습니다.");
			return false;
		}

		bool bAlreadyInSet = false;
		UniqueDigits.Add(C, &bAlreadyInSet);
		if (bAlreadyInSet == true)
		{
			OutErrorMessage = TEXT("중복되는 숫자가 있습니다.");
			return false;
		}
	}

	return true;
}
