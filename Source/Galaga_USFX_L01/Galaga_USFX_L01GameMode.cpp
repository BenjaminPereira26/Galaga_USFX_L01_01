// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFX_L01GameMode.h"
#include "Galaga_USFX_L01Pawn.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaEspia.h"
#include "NaveEnemigaKamikaze.h"
#include "NaveEnemigaNodriza.h"
#include "NaveEnemigaReabastecimiento.h"
#include "NaveEnemigaTransporte.h"
#include "CapsulaEnergia50pts.h"
#include "CapsulaEnergia100pts.h"
#include "CapsulaEnergia200pts.h"
#include "MyAgujeroNegro.h"
#include "FNECaza.h"
#include "ExplosiveAdapter.h"
#include "FNEKamikaze.h"
#include "FNEEspia.h"
#include "Kismet/GameplayStatics.h"
#include "BallAdapter.h"

AGalaga_USFX_L01GameMode::AGalaga_USFX_L01GameMode()
{
	PrimaryActorTick.bCanEverTick = true;
	DefaultPawnClass = AGalaga_USFX_L01Pawn::StaticClass();
	ContObs = 1;
	TimerController = 0.0f;
}

void AGalaga_USFX_L01GameMode::BeginPlay()
{
	Super::BeginPlay();
	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		
	/*const int32 NumeroDeColumnasReabasteimiento = 1;
	const int32 NumeroDeFilasReabastecimiento = 5;

	for (int32 Columna = 0; Columna < NumeroDeColumnasReabasteimiento; ++Columna)
	{
		TArray<ANaveEnemigaReabastecimiento*> NavesEnColumna;
		for (int32 Fila = 0; Fila < NumeroDeFilasReabastecimiento; ++Fila)
		{
			FVector SpawningLocation = FVector(Columna * 300 + 1800.0f, Fila * 200 + -500.0f, 250.0f);
			FRotator SpawningRotation = FRotator::ZeroRotator;

			ANaveEnemigaReabastecimiento* NuevaNaveReabastecimiento = GetWorld()->SpawnActor<ANaveEnemigaReabastecimiento>(SpawningLocation, SpawningRotation);
			NavesEnColumna.Add(NuevaNaveReabastecimiento);
		}
		ColumnaNavesEnemigasReabastecimiento.Add(Columna, NavesEnColumna);
	}
	
	const int32 NumeroDeColumnasNodriza = 1;
	const int32 NumeroDeFilasNodriza = 5;

	for (int32 Columna = 0; Columna < NumeroDeColumnasNodriza; ++Columna)
	{
		TArray<ANaveEnemigaNodriza*> NavesEnColumna;
		for (int32 Fila = 0; Fila < NumeroDeFilasNodriza; ++Fila)
		{
			FVector SpawningLocation = FVector(Columna * 300 + 1500.0f, Fila * 200 + -500.0f, 250.0f);
			FRotator SpawningRotation = FRotator::ZeroRotator;

			ANaveEnemigaNodriza* NuevaNaveNodriza = GetWorld()->SpawnActor<ANaveEnemigaNodriza>(SpawningLocation, SpawningRotation);
			NavesEnColumna.Add(NuevaNaveNodriza);
		}
		ColumnaNavesEnemigasNodriza.Add(Columna, NavesEnColumna);
	}

	const int32 NumeroDeColumnasEspia = 1;
	const int32 NumeroDeFilasEspia = 5;

	for (int32 Columna = 0; Columna < NumeroDeColumnasEspia; ++Columna)
	{
		TArray<ANaveEnemigaEspia*> NavesEnColumna;
		for (int32 Fila = 0; Fila < NumeroDeFilasEspia; ++Fila)
		{
			FVector SpawningLocation = FVector(Columna * 300 + 1200.0f, Fila * 200 + -500.0f, 250.0f);
			FRotator SpawningRotation = FRotator::ZeroRotator;

			ANaveEnemigaEspia* NuevaNaveEspia = GetWorld()->SpawnActor<ANaveEnemigaEspia>(SpawningLocation, SpawningRotation);
			NavesEnColumna.Add(NuevaNaveEspia);
		}
		ColumnaNavesEnemigasEspia.Add(Columna, NavesEnColumna);
	}

	const int32 NumeroDeColumnasTransporte = 1;
	const int32 NumeroDeFilasTransporte = 5;

	for (int32 Columna = 0; Columna < NumeroDeColumnasTransporte; ++Columna)
	{
		TArray<ANaveEnemigaTransporte*> NavesEnColumna;
		for (int32 Fila = 0; Fila < NumeroDeFilasTransporte; ++Fila)
		{
			FVector SpawningLocation = FVector(Columna * 300 + 900.0f, Fila * 200 + -500.0f, 250.0f);
			FRotator SpawningRotation = FRotator::ZeroRotator;

			ANaveEnemigaTransporte* NuevaNaveTransporte = GetWorld()->SpawnActor<ANaveEnemigaTransporte>(SpawningLocation, SpawningRotation);
			NavesEnColumna.Add(NuevaNaveTransporte);
		}
		ColumnaNavesEnemigasTransporte.Add(Columna, NavesEnColumna);
	}

	const int32 NumeroDeColumnasCaza = 2;
	const int32 NumeroDeFilasCaza = 5;

	for (int32 Columna = 0; Columna < NumeroDeColumnasCaza; ++Columna)
	{
		TArray<ANaveEnemigaCaza*> NavesEnColumna;
		for (int32 Fila = 0; Fila < NumeroDeFilasCaza; ++Fila)
		{
			FVector SpawningLocation = FVector(Columna * 300 + 300.0f, Fila * 200 + -500.0f, 250.0f);
			FRotator SpawningRotation = FRotator::ZeroRotator;

			ANaveEnemigaCaza* NuevaNaveCaza = GetWorld()->SpawnActor<ANaveEnemigaCaza>(SpawningLocation, SpawningRotation);
			NavesEnColumna.Add(NuevaNaveCaza);
			if (Fila == 2)
			{
				NuevaNaveCaza->Destroy();
			}
		}
		ColumnaNavesEnemigasCaza.Add(Columna, NavesEnColumna);
	}

	const int32 NumeroDeColumnasKamikaze = 1;
	const int32 NumeroDeFilasKamikaze = 5;

	for (int32 Columna = 0; Columna < NumeroDeColumnasKamikaze; ++Columna)
	{
		TArray<ANaveEnemigaKamikaze*> NavesEnColumna;
		for (int32 Fila = 0; Fila < NumeroDeFilasKamikaze; ++Fila)
		{
			FVector SpawningLocation = FVector(Columna * 300 + 0.0f, Fila * 200 + -500.0f, 250.0f);
			FRotator SpawningRotation = FRotator::ZeroRotator;

			ANaveEnemigaKamikaze* NuevaNaveKamikaze = GetWorld()->SpawnActor<ANaveEnemigaKamikaze>(SpawningLocation, SpawningRotation);
			NavesEnColumna.Add(NuevaNaveKamikaze);
			if (Fila % 2 == 1)
			{
				NuevaNaveKamikaze->Destroy();
			}
		}
		ColumnaNavesEnemigasKamikaze.Add(Columna, NavesEnColumna);
	}
	const int32 NumeroDeColumnasAN = 1;
	const int32 NumeroDeFilasAN = 5;

	for (int32 Columna = 0; Columna < NumeroDeColumnasAN; ++Columna)
	{
		TArray<AMyAgujeroNegro*> AgujerosEnColumna;
		for (int32 Fila = 0; Fila < NumeroDeFilasAN; ++Fila)
		{
			FVector SpawningLocation = FVector(1700.0f, FMath::RandRange(-500.0f, 200.0f) + 100.0f, 165.0f);
			FRotator SpawningRotation = FRotator::ZeroRotator;

			AMyAgujeroNegro* NuevoAN= GetWorld()->SpawnActor<AMyAgujeroNegro>(SpawningLocation, SpawningRotation);
			AgujerosEnColumna.Add(NuevoAN);
		}
		ColumnaAgujeroNegro.Add(Columna, AgujerosEnColumna);
	}*/
	
	/*AFabricaNavesEnemigas* FNECaza = GetWorld()->SpawnActor<AFNECaza>(AFNECaza::StaticClass());
	ANaveEnemiga* NaveEnemigaC = FNECaza->OrderNave("Caza");
	AFabricaNavesEnemigas* FNEKamikaze = GetWorld()->SpawnActor<AFNEKamikaze>(AFNEKamikaze::StaticClass());
	ANaveEnemiga* NaveEnemigaK = FNEKamikaze->OrderNave("Kamikaze");
	AFabricaNavesEnemigas* FNEEspia = GetWorld()->SpawnActor<AFNEEspia>(AFNEEspia::StaticClass());
	ANaveEnemiga* NaveEnemigaE = FNEEspia->OrderNave("Espia");*/
	
	/*ConstructorPaquetesEnergia = GetWorld()->SpawnActor<AConcretoBuildCapsulas>(AConcretoBuildCapsulas::StaticClass());
	Director = GetWorld()->SpawnActor<ADirectorCapsulasEnergia>(ADirectorCapsulasEnergia::StaticClass());
	Director->EstablecerConstructorPaquetes(ConstructorPaquetesEnergia);*/
	TiempoTranscurrido = 0;

	ConstructorNodriza = GetWorld()->SpawnActor<AConcretoBuilderNodriza>(AConcretoBuilderNodriza::StaticClass());
	DirectorN = GetWorld()->SpawnActor<ADirectorNodriza>(ADirectorNodriza::StaticClass());
	DirectorN->EstablecerConstructorNodriza(ConstructorNodriza);
	DirectorN->ConstruirNodriza();

	ConstructorObstaculos = GetWorld()->SpawnActor<AConcretoBuilderObstaculos>(AConcretoBuilderObstaculos::StaticClass());
	Arqui = GetWorld()->SpawnActor<AArquitectoObstaculos>(AArquitectoObstaculos::StaticClass());
	Arqui->EstablecerConstructorObstaculos(ConstructorObstaculos);
	AConcretoObstaculos* Obstaculos = Arqui->GetObstaculos();


	Jugador = Cast<AGalaga_USFX_L01Pawn>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	AdaptadorB = GetWorld()->SpawnActor<ABallAdapter>(ABallAdapter::StaticClass(), FVector(0, 0, 0), FRotator::ZeroRotator);
	Jugador->SetBounceBall(AdaptadorB);
	Jugador->lanzar();

	}

}


void AGalaga_USFX_L01GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	TiempoTranscurrido++;
	TimerController += DeltaTime;
	TimerShot += DeltaTime;
	
	if (TimerController >= 10.0f)
	{
		Arqui->ConstruirObstaculos(ContObs);
		TimerController = 0.0f;
		ContObs++;
		if (ContObs > 3)
		{
			ContObs = 1;
		}
	}
}