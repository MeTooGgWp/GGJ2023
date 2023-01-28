// Fill out your copyright notice in the Description page of Project Settings.


#include "MineralSalts.h"

void AMineralSalts::OnBeginOverlap_Implementation(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	IncreaseMiningSpeed();
}
