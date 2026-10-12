// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "NBPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class NUMBERBASEBALL_API ANBPlayerState : public APlayerState
{
	GENERATED_BODY()

public:
	ANBPlayerState();

	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;
	FString GetPlayerInfoString();

	UPROPERTY(Replicated)
	FString PlayerNameString;

	UPROPERTY(Replicated)
	int32 CurrentGuessCount;

	UPROPERTY(Replicated)
	int32 MaxGuessCount;

	int32 GetCurrentGuessCount() const { return CurrentGuessCount; }
	int32 GetMaxGuessCount() const { return MaxGuessCount; }

	bool HasRemainingGuess() const { return CurrentGuessCount < MaxGuessCount; }

	FString GetGuessCountString() const;


};
