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
	StaticMeshComponent->OnComponentHit.AddDynamic(this, &AInteractible::OnHitComponent);
}

// Called when the game starts or when spawned
void AInteractible::BeginPlay()
{
	Super::BeginPlay();
	
	
}

// Called every frame
void AInteractible::Tick(float DeltaTime)
{
	

}

void AInteractible::OnHitComponent(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	OnComponentHit_Implementation(HitComponent,OtherActor, OtherComp, NormalImpulse, Hit);
}


void AInteractible::OnComponentHit_Implementation(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {

}
