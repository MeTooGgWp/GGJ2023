// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Interactible.h"
#include "Water.generated.h"

/**
 * 
 */
UCLASS()
class GGJ023_API AWater : public AInteractible
{
	GENERATED_BODY()
	
public:
	void OnComponentHit_Implementation(
		UPrimitiveComponent* HitComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		FVector NormalImpulse,
		const FHitResult& Hit
	) override;
};
