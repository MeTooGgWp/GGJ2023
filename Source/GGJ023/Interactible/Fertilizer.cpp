// Fill out your copyright notice in the Description page of Project Settings.


#include "Fertilizer.h"

void AFertilizer::OnComponentHit_Implementation(UPrimitiveComponent* HitComponent,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	FVector NormalImpulse,
	const FHitResult& Hit)
{

		IncreaseDurability();
	
}
