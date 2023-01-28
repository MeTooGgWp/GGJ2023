// Fill out your copyright notice in the Description page of Project Settings.


#include "Rocks.h"

void ARocks::OnBeginOverlap_Implementation(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	MakeRootFragile();
}
