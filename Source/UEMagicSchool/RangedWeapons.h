// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapons.h"
#include "RangedWeapons.generated.h"

/**
 * 
 */
UCLASS()
class UEMAGICSCHOOL_API ARangedWeapons : public AWeapons
{
	GENERATED_BODY()
private:


public:
	// Sets default values for this actor's properties
	ARangedWeapons();

	// Called every frame
	virtual void Tick(float DeltaTime) override;
	bool RayTraceBullet(FHitResult& Hit, FVector& ShotDirection);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	UPROPERTY(EditAnywhere)
		float Range;

};
