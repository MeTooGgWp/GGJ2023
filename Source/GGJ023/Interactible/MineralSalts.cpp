// Fill out your copyright notice in the Description page of Project Settings.


#include "MineralSalts.h"

void AMineralSalts::OnComponentHit_Implementation(UPrimitiveComponent* HitComponent,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	FVector NormalImpulse,
	const FHitResult& Hit)
{

		IncreaseMiningSpeed();
	
}
