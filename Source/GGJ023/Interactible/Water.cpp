// Fill out your copyright notice in the Description page of Project Settings.


#include "Water.h"

void AWater::OnComponentHit_Implementation(
	UPrimitiveComponent* HitComponent,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	FVector NormalImpulse,
	const FHitResult& Hit
)
{

	IncreaseSoftness();
}
