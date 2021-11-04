// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Assignment1GameMode.generated.h"

UCLASS(minimalapi)
class AAssignment1GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AAssignment1GameMode();

	virtual void Tick(float DeltaSeconds) override;
	UFUNCTION(BlueprintNativeEvent)
	void OnVictory();
};



