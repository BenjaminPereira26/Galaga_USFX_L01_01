// Fill out your copyright notice in the Description page of Project Settings.


#include "FNECaza.h"
#include "NaveEnemigaCaza.h"

ANaveEnemiga* AFNECaza::ConcoctNave(FString NaveSKU)
{
	FVector SpawningLocation = FVector(100.0f, 200.0f, 250.0f);
	FRotator SpawningRotation = FRotator::ZeroRotator;
	UWorld* const World = GetWorld();
	if (World != nullptr) {
		NaveSKU = "Caza";
	}
	if (NaveSKU.Equals("Caza")) {
		return GetWorld()->SpawnActor<ANaveEnemigaCaza>(ANaveEnemigaCaza::StaticClass(), SpawningLocation, SpawningRotation);
	
	}
	else return nullptr;
}
