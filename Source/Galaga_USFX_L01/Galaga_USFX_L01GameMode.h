// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ConcretoBuildCapsulas.h"
#include "DirectorCapsulasEnergia.h"
#include "ConcretoBuilderNodriza.h"
#include "DirectorNodriza.h"
#include "CapsulaBridge.h"
#include "ConcretoBuilderObstaculos.h"
#include "ArquitectoObstaculos.h"
#include "Galaga_USFX_L01GameMode.generated.h"

class ACapsulaBridge;

UCLASS(MinimalAPI)
class AGalaga_USFX_L01GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGalaga_USFX_L01GameMode();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	int TiempoTranscurrido;

public:
	virtual void Tick(float DeltaTime) override;

public:
	float TimerShot;
	TArray<ACapsulaBridge*> TACapsulasBridge;
	TMap<int32, TArray<ACapsulaBridge*>> ColumnaCapsulasBridge;
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

protected:
	UPROPERTY(VisibleAnywhere, Category = "Game mode")
	class ARecord* Record;

	UPROPERTY(VisibleAnywhere, Category = "Game mode")
	class ASuscriptorPrueba* Sub;
public:
	float TimeDay;

public:
	class AAyudantePawn* Ayudante;
	class ADisparoN1* DisparoN1;
	class ADisparoN2* DisparoN2;
	class ADisparoN3* DisparoN3;

;

protected:
	UPROPERTY(VisibleAnywhere, Category = "Game mode")
	class ACapsulaBridge* Capsula;
	UPROPERTY(VisibleAnywhere, Category = "Game mode")
	class ANaveEnemigaCaza* Caza;
	UPROPERTY(VisibleAnywhere, Category = "Game mode")
	class ANaveEnemigaNodriza* Nodriza;
	UPROPERTY(VisibleAnywhere, Category = "Game mode")
	class ANaveEnemigaTransporte* Transporte;

protected:
	UPROPERTY(VisibleAnywhere, Category = "Game mode")
	class AProxyCargarBalas* Proxy;
 };