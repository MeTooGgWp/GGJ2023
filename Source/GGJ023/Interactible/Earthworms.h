// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Interactible.h"
#include "Earthworms.generated.h"

/**
 * 
 */
UCLASS()
class GGJ023_API AEarthworms : public AInteractible
{
	GENERATED_BODY()
public:
	virtual void OnBeginOverlap_Implementation(
		UPrimitiveComponent* OverlappedComp,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult
	) override;
};
