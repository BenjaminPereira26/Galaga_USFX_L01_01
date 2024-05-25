// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ConcretoBuildCapsulas.h"
#include "DirectorCapsulasEnergia.h"
#include "ConcretoBuilderNodriza.h"
#include "DirectorNodriza.h"
#include "ConcretoBuilderObstaculos.h"
#include "ArquitectoObstaculos.h"
#include "Galaga_USFX_L01GameMode.generated.h"

class ANaveEnemiga;
class ANaveEnemigaCaza;
class ANaveEnemigaEspia;
class ANaveEnemigaKamikaze;
class ANaveEnemigaNodriza;
class ANaveEnemigaReabastecimiento;
class ANaveEnemigaTransporte;
class ACapsulaEnergia50pts;
class ACapsulaEnergia100pts;
class ACapsulaEnergia200pts;
class AMyAgujeroNegro;
UCLASS(MinimalAPI)
class AGalaga_USFX_L01GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGalaga_USFX_L01GameMode();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	TArray<ANaveEnemiga*> TANavesEnemigas;
	TArray<ANaveEnemigaCaza*> TANavesEnemigasCaza;
	TArray<ANaveEnemigaEspia*> TANavesEnemigasEspia;
	TArray<ANaveEnemigaKamikaze*> TANavesEnemigasKamikaze;
	TArray<ANaveEnemigaNodriza*> TANavesEnemigasNodriza;
	TArray<ANaveEnemigaReabastecimiento*> TANavesEnemigasReabastecimiento;
	TArray<ANaveEnemigaTransporte*> TANavesEnemigasTransporte;
	TArray<ACapsulaEnergia50pts*> TACapsulasEnergia50pts;
	TArray<ACapsulaEnergia100pts*> TACapsulasEnergia100pts;
	TArray<ACapsulaEnergia200pts*> TACapsulasEnergia200pts;
	TArray<AMyAgujeroNegro*> TAgujeroNegro;

private:
	int TiempoTranscurrido;

public:
	virtual void Tick(float DeltaTime) override;

public:
	// Inicialización del TMap
	TMap<int32, TArray<ANaveEnemigaCaza*>> ColumnaNavesEnemigasCaza;
	TMap<int32, TArray<ANaveEnemigaEspia*>> ColumnaNavesEnemigasEspia;
	TMap<int32, TArray<ANaveEnemigaKamikaze*>> ColumnaNavesEnemigasKamikaze;
	TMap<int32, TArray<ANaveEnemigaNodriza*>> ColumnaNavesEnemigasNodriza;
	TMap<int32, TArray<ANaveEnemigaReabastecimiento*>> ColumnaNavesEnemigasReabastecimiento;
	TMap<int32, TArray<ANaveEnemigaTransporte*>> ColumnaNavesEnemigasTransporte;
	TMap<int32, TArray<ACapsulaEnergia50pts*>> ColumnaCapsulasEnergia50pts;
	TMap<int32, TArray<ACapsulaEnergia100pts*>> ColumnaCapsulasEnergia100pts;
	TMap<int32, TArray<ACapsulaEnergia200pts*>> ColumnaCapsulasEnergia200pts;
	TMap<int32, TArray<AMyAgujeroNegro*>> ColumnaAgujeroNegro;
public:
	float TimerShot;
private:
	int32 ContObs;
	float TimerController;

	UPROPERTY(VisibleAnywhere, Category = "GameModeBase")
	AConcretoBuildCapsulas* ConstructorPaquetesEnergia;

	UPROPERTY(VisibleAnywhere, Category = "GameModeBase")
	ADirectorCapsulasEnergia* Director;
	
	UPROPERTY(VisibleAnywhere, Category = "GameModeBase")
	AConcretoBuilderNodriza* ConstructorNodriza;

	UPROPERTY(VisibleAnywhere, Category = "GameModeBase")
	ADirectorNodriza* DirectorN;

	UPROPERTY(VisibleAnywhere, Category = "GameModeBase")
	AConcretoBuilderObstaculos* ConstructorObstaculos;

	UPROPERTY(VisibleAnywhere, Category = "GameModeBase")
	AArquitectoObstaculos* Arqui;
public:
	UPROPERTY(VisibleAnywhere, Category = "Game mode")
	class AGalaga_USFX_L01Pawn* Jugador;

	UPROPERTY(VisibleAnywhere, Category = "Game mode")
	class ABallAdapter* AdaptadorB;


 };