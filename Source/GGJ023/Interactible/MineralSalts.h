// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Interactible.h"
#include "MineralSalts.generated.h"

/**
 * 
 */
UCLASS()
class GGJ023_API AMineralSalts : public AInteractible
{
	GENERATED_BODY()
public:
	virtual void OnComponentHit_Implementation(
		UPrimitiveComponent* HitComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		FVector NormalImpulse,
		const FHitResult& Hit
	) override;
};
