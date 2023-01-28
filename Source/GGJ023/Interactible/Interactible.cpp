// Fill out your copyright notice in the Description page of Project Settings.


#include "Interactible.h"

// Sets default values
AInteractible::AInteractible()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision Box"));
	CollisionBox->SetupAttachment(RootComponent);
	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh"));
	StaticMeshComponent->SetupAttachment(CollisionBox);
	StaticMeshComponent->SetStaticMesh(StaticMesh);
}

// Called when the game starts or when spawned
void AInteractible::BeginPlay()
{
	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &AInteractible::OnOverlapBegin);
	
}

// Called every frame
void AInteractible::Tick(float DeltaTime)
{
	

}

void AInteractible::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	OnBeginOverlap_Implementation(OverlappedComp, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);
}

void AInteractible::OnBeginOverlap_Implementation(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
}
