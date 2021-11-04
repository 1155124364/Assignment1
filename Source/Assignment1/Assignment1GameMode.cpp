// Copyright Epic Games, Inc. All Rights Reserved.

#include "Assignment1GameMode.h"
#include "Assignment1HUD.h"
#include "Assignment1Character.h"
#include "MyGameStateBase.h"
#include "UObject/ConstructorHelpers.h"

AAssignment1GameMode::AAssignment1GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AAssignment1HUD::StaticClass();
}

void AAssignment1GameMode::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	AMyGameStateBase* GS = GetGameState<AMyGameStateBase>();
	if (GS)
	{
		UE_LOG(LogTemp, Log, TEXT("Get GS Success!"));
		//GEngine->AddOnScreenDebugMessage(1, 5, FColor::Green, FString::Printf(TEXT("Score: %d"), GS->Score), true, FVector2D(5.0, 5.0));
		if (GS->Score > 3)
		{
			OnVictory();
		}
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("Get GS Failed!"));
		GEngine->AddOnScreenDebugMessage(1, 5, FColor::Green, TEXT("Get GS Failed!"));
	}
}

void AAssignment1GameMode::OnVictory_Implementation()
{
	
}
