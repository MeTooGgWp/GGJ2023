// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "InteractibleInterface.h"
#include "Interactible.generated.h"

UCLASS()
class GGJ023_API AInteractible : public AActor, public IInteractibleInterface
{
	GENERATED_BODY()
	
public: 
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Stat")
		UStaticMeshComponent* StaticMeshComponent;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Stat")
		UStaticMesh* StaticMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stat")
		UBoxComponent* CollisionBox;


public:	
	// Sets default values for this actor's properties
	AInteractible();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//UFUNTIONS
	UFUNCTION()
		void OnOverlapBegin(
			UPrimitiveComponent* OverlappedComp,
			AActor* OtherActor,
			UPrimitiveComponent* OtherComp,
			int32 OtherBodyIndex,
			bool bFromSweep,
			const FHitResult& SweepResult
		);

	virtual void OnBeginOverlap_Implementation(
		UPrimitiveComponent* OverlappedComp,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult
	);
};
