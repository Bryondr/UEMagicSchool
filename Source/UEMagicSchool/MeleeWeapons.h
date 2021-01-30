// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapons.h"
#include "MeleeWeapons.generated.h"

/**
 * 
 */
UCLASS()
class UEMAGICSCHOOL_API AMeleeWeapons : public AWeapons
{
	GENERATED_BODY()
	
private:


public:	
	// Sets default values for this actor's properties
	AMeleeWeapons();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
