

#include "Player/NBPawn.h"
#include "numberbaseball.h"

void ANBPawn::BeginPlay()
{
	Super::BeginPlay(); 

	FString NetRoleString = NBFunctionLibrary::GetRoleString(this);
	FString CombinedString = FString::Printf(TEXT("NBPawn::BeginPlay() %s [%s]"), *NBFunctionLibrary::GetNetModeString(this), *NetRoleString);
	NBFunctionLibrary::MyPrintString(this, CombinedString, 10.f);
}

void ANBPawn::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	FString NetRoleString = NBFunctionLibrary::GetRoleString(this);
	FString CombinedString = FString::Printf(TEXT("NBPawn::PossessedBy() %s [%s]"), *NBFunctionLibrary::GetNetModeString(this), *NetRoleString);
	NBFunctionLibrary::MyPrintString(this, CombinedString, 10.f);
}
