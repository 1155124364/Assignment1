// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Assignment1GameMode.h"
#include "MyAssignment1GameMode.generated.h"

/**
 * 
 */
UCLASS()
class ASSIGNMENT1_API AMyAssignment1GameMode : public AAssignment1GameMode
{
	GENERATED_BODY()
public:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaSeconds) override;
};
