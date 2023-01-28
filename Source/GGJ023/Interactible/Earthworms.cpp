// Fill out your copyright notice in the Description page of Project Settings.


#include "Earthworms.h"

void AEarthworms::OnBeginOverlap_Implementation(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!OtherActor->IsA<ACharacter>()) {
		StopStamina();
	}
	

}
