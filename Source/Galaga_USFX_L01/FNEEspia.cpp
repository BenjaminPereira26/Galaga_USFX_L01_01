// Fill out your copyright notice in the Description page of Project Settings.


#include "FNEEspia.h"
#include "NaveEnemigaEspia.h"
ANaveEnemiga* AFNEEspia::ConcoctNave(FString NaveSKU)
{
	FVector SpawningLocation = FVector(-600.0f, -200.0f, 250.0f);
	FRotator SpawningRotation = FRotator::ZeroRotator;
	UWorld* const World = GetWorld();
	if (World != nullptr) {
		NaveSKU = "Espia";
	}
	if (NaveSKU.Equals("Espia")) {
		return GetWorld()->SpawnActor<ANaveEnemigaEspia>(ANaveEnemigaEspia::StaticClass(), SpawningLocation, SpawningRotation);

	}
	else return nullptr;
}

