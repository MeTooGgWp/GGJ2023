// Fill out your copyright notice in the Description page of Project Settings.


#include "Earthworms.h"

void AEarthworms::OnComponentHit_Implementation(
	UPrimitiveComponent* HitComponent,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	FVector NormalImpulse,
	const FHitResult& Hit)
{

		StopStamina();
	
	

}
