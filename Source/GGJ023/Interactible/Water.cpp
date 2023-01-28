// Fill out your copyright notice in the Description page of Project Settings.


#include "Water.h"

void AWater::OnBeginOverlap_Implementation(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!OtherActor->IsA<ACharacter>()) {
		IncreaseSoftness();
	}
}
