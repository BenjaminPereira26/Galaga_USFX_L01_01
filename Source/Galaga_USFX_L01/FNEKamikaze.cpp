// Fill out your copyright notice in the Description page of Project Settings.


#include "FNEKamikaze.h"
#include "NaveEnemigaKamikaze.h"
ANaveEnemiga* AFNEKamikaze::ConcoctNave(FString NaveSKU)
{
	FVector SpawningLocation = FVector(-300.0f, 0.0f, 250.0f);
	FRotator SpawningRotation = FRotator::ZeroRotator;
	UWorld* const World = GetWorld();
	if (World != nullptr) {
		NaveSKU = "Kamikaze";
	}
	if (NaveSKU.Equals("Kamikaze")) {
		return GetWorld()->SpawnActor<ANaveEnemigaKamikaze>(ANaveEnemigaKamikaze::StaticClass(), SpawningLocation, SpawningRotation);

	}
	else return nullptr;
}
