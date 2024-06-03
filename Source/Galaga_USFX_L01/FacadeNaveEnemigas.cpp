// Fill out your copyright notice in the Description page of Project Settings.


#include "FacadeNaveEnemigas.h"

// Sets default values
AFacadeNaveEnemigas::AFacadeNaveEnemigas()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFacadeNaveEnemigas::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFacadeNaveEnemigas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFacadeNaveEnemigas::setFlotaNEKamikaze()
{
	UWorld* const World = GetWorld();
	for (int i = 0; i < 5; i++) {
		FVector PosicionNaveActual = FVector(0.0f, -500.0f + i * 300.0f, 250.0f);
		ANaveEnemigaKamikaze* NEK = World->SpawnActor<ANaveEnemigaKamikaze>(PosicionNaveActual, FRotator::ZeroRotator);


		FlotaNEKamikaze.Push(NEK);
	}
}

void AFacadeNaveEnemigas::setFlotaNECaza()
{
	UWorld* const World = GetWorld();
	for (int i = 0; i < 5; i++) {
		FVector PosicionNaveActual = FVector(300.0f, -500.0f + i * 300.0f, 250.0f);
		ANaveEnemigaCaza* NEC = World->SpawnActor<ANaveEnemigaCaza>(PosicionNaveActual, FRotator::ZeroRotator);


		FlotaNECaza.Push(NEC);
	}
}

void AFacadeNaveEnemigas::setFlotaNEEspia()
{
	UWorld* const World = GetWorld();
	for (int i = 0; i < 5; i++) {
		FVector PosicionNaveActual = FVector(1200.0f, -500.0f + i * 300.0f, 250.0f);
		ANaveEnemigaEspia* NEE = World->SpawnActor<ANaveEnemigaEspia>(PosicionNaveActual, FRotator::ZeroRotator);


		FlotaNEEspia.Push(NEE);
	}
}

void AFacadeNaveEnemigas::setFlotaNENodriza()
{
	UWorld* const World = GetWorld();
	for (int i = 0; i < 5; i++) {
		FVector PosicionNaveActual = FVector(1500.0f, -500.0f + i * 300.0f, 250.0f);
		ANaveEnemigaNodriza* NEN = World->SpawnActor<ANaveEnemigaNodriza>(PosicionNaveActual, FRotator::ZeroRotator);


		FlotaNENodriza.Push(NEN);
	}
}

void AFacadeNaveEnemigas::setFlotaNEReabastecimiento()
{
	UWorld* const World = GetWorld();
	for (int i = 0; i < 5; i++) {
		FVector PosicionNaveActual = FVector(1800.0f, -500.0f + i * 300.0f, 250.0f);
		ANaveEnemigaReabastecimiento* NER = World->SpawnActor<ANaveEnemigaReabastecimiento>(PosicionNaveActual, FRotator::ZeroRotator);


		FlotaNEReabastecimiento.Push(NER);
	}
}

void AFacadeNaveEnemigas::setFlotaNETransporte()
{
	UWorld* const World = GetWorld();
	for (int i = 0; i < 5; i++) {
		FVector PosicionNaveActual = FVector(900.0f, -500.0f + i * 300.0f, 250.0f);
		ANaveEnemigaTransporte* NET = World->SpawnActor<ANaveEnemigaTransporte>(PosicionNaveActual, FRotator::ZeroRotator);


		FlotaNETransporte.Push(NET);
	}
}

void AFacadeNaveEnemigas::setAyudantePawn()
{
	UWorld* const World = GetWorld();
	for (int i = 0; i < 1; i++) {
		FVector PosicionNaveActual = FVector(-790.0f, -450.0f , 214.72f);
		AAyudantePawn* AP = World->SpawnActor<AAyudantePawn>(PosicionNaveActual, FRotator::ZeroRotator);


		AyudantePawn.Push(AP);
	}
}

void AFacadeNaveEnemigas::setCanionB()
{
}

