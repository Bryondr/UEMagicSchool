// Fill out your copyright notice in the Description page of Project Settings.
#include "MeleeWeapons.h"

AMeleeWeapons::AMeleeWeapons()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Damage = 5;
}

void AMeleeWeapons::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMeleeWeapons::BeginPlay()
{
	Super::BeginPlay();

}

