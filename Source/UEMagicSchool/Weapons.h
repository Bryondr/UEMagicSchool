// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Weapons.generated.h"

UCLASS()
class UEMAGICSCHOOL_API AWeapons : public AActor
{
	GENERATED_BODY()
	
protected:
	
	UPROPERTY(VisibleAnywhere)
		USceneComponent* Root;
	
	UPROPERTY(VisibleAnywhere)
		USkeletalMeshComponent* Mesh;

	UPROPERTY(EditAnywhere)
		UParticleSystem* HitTrail;

	UPROPERTY(EditAnywhere)
		USoundBase* HitSound;

	UPROPERTY(EditAnywhere)
		float Damage;

	UPROPERTY(EditAnywhere)
		FText Name;
	
public:	
	// Sets default values for this actor's properties
	AWeapons();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	AController* GetOwnerController() const;
};
