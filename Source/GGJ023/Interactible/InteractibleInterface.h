// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InteractibleInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UInteractibleInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GGJ023_API IInteractibleInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

//Bonuses
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
		void IncreaseSoftness();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
		void IncreaseDurability();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
		void IncreaseMiningSpeed();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
		void StopStamina();

//Maluses
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
		void Sway();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
		void DecreaseSoftness();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
		void MakeRootFragile();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
		void BreakRoot();
};
