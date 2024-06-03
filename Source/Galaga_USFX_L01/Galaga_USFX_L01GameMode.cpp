// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFX_L01GameMode.h"
#include "Galaga_USFX_L01Pawn.h"
#include "Galaga_USFX_L01Projectile.h"
#include "NaveEnemigaKamikaze.h"
#include "FNECaza.h"
#include "ExplosiveAdapter.h"
#include "FNEKamikaze.h"
#include "FNEEspia.h"
#include "Kismet/GameplayStatics.h"
#include "BallAdapter.h"
#include "FacadeNaveEnemigas.h"
#include "FacadeNiveles.h"
#include "ConcretoObstaculos.h"
#include "ArquitectoObstaculos.h"
#include "ConcretoBuilderObstaculos.h"
#include "ConcretoBuildCapsulas.h"
#include "Record.h"
#include "AyudantePawn.h"
#include "SuscriptorPrueba.h"
#include "DisparoN1.h"
#include "DisparoN2.h"
#include "DisparoN3.h"


AGalaga_USFX_L01GameMode::AGalaga_USFX_L01GameMode()
{
	PrimaryActorTick.bCanEverTick = true;
	DefaultPawnClass = AGalaga_USFX_L01Pawn::StaticClass();
	ContObs = 1;
	TimerController = 0.0f;
	TimeDay = 0.0f;
}

void AGalaga_USFX_L01GameMode::BeginPlay()
{
	Super::BeginPlay();
	UWorld* const World = GetWorld();
	if (World != nullptr)
	{	
	//Factory Method
	AFabricaNavesEnemigas* FNECaza = GetWorld()->SpawnActor<AFNECaza>(AFNECaza::StaticClass());
	ANaveEnemiga* NaveEnemigaC = FNECaza->OrderNave("Caza");
	AFabricaNavesEnemigas* FNEKamikaze = GetWorld()->SpawnActor<AFNEKamikaze>(AFNEKamikaze::StaticClass());
	ANaveEnemiga* NaveEnemigaK = FNEKamikaze->OrderNave("Kamikaze");
	AFabricaNavesEnemigas* FNEEspia = GetWorld()->SpawnActor<AFNEEspia>(AFNEEspia::StaticClass());
	ANaveEnemiga* NaveEnemigaE = FNEEspia->OrderNave("Espia");
	
	ConstructorPaquetesEnergia = GetWorld()->SpawnActor<AConcretoBuildCapsulas>(AConcretoBuildCapsulas::StaticClass());
	Director = GetWorld()->SpawnActor<ADirectorCapsulasEnergia>(ADirectorCapsulasEnergia::StaticClass());
	Director->EstablecerConstructorPaquetes(ConstructorPaquetesEnergia);

	//Builder Constructor de obstaculos
	ConstructorObstaculos = GetWorld()->SpawnActor<AConcretoBuilderObstaculos>(AConcretoBuilderObstaculos::StaticClass());
	Arqui = GetWorld()->SpawnActor<AArquitectoObstaculos>(AArquitectoObstaculos::StaticClass());
	Arqui->EstablecerConstructorObstaculos(ConstructorObstaculos);
	AConcretoObstaculos* Obstaculos = Arqui->GetObstaculos();

	//Adaptador para clase extranjera Ball
	Jugador = Cast<AGalaga_USFX_L01Pawn>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	AdaptadorB = GetWorld()->SpawnActor<ABallAdapter>(ABallAdapter::StaticClass(), FVector(0, 0, 0), FRotator::ZeroRotator);
	Jugador->SetBounceBall(AdaptadorB);
	Jugador->lanzar();

	//Facade creación naves enemigas por nivel
	/*AFacadeNiveles* FacadeNiv = GetWorld()->SpawnActor<AFacadeNiveles>(AFacadeNiveles::StaticClass());
	FacadeNiv->setNENivel1();
	FacadeNiv->setNENivel2();
	FacadeNiv->setNENivel3();*/

	//Builder Nodriza
	ConstructorNodriza = GetWorld()->SpawnActor<AConcretoBuilderNodriza>(AConcretoBuilderNodriza::StaticClass());
	DirectorN = GetWorld()->SpawnActor<ADirectorNodriza>(ADirectorNodriza::StaticClass());
	DirectorN->EstablecerConstructorNodriza(ConstructorNodriza);
	DirectorN->ConstruirNodriza();

	//Observer
	Record = GetWorld()->SpawnActor<ARecord>(ARecord::StaticClass());
	Sub = GetWorld()->SpawnActor<ASuscriptorPrueba>(ASuscriptorPrueba::StaticClass());
	Sub->EstablecerRecord(Record);

	//Facade
	AFacadeNiveles* FacadeNiv = GetWorld()->SpawnActor<AFacadeNiveles>(AFacadeNiveles::StaticClass());
	FacadeNiv->setNivel(1);
	FacadeNiv->setNivel(2);
	FacadeNiv->setNivel(3);


	Ayudante = GetWorld()->SpawnActor<AAyudantePawn>(AAyudantePawn::StaticClass());

	DisparoN1 = GetWorld()->SpawnActor<ADisparoN1>(ADisparoN1::StaticClass());
	DisparoN2 = GetWorld()->SpawnActor<ADisparoN2>(ADisparoN2::StaticClass());
	DisparoN3 = GetWorld()->SpawnActor<ADisparoN3>(ADisparoN3::StaticClass());

	Ayudante->CambiarEstrategias(DisparoN1);
	Ayudante->EjecutarEstrategias();
	/*Ayudante->CambiarEstrategias(DisparoN2);
	Ayudante->EjecutarEstrategias();
	Ayudante->CambiarEstrategias(DisparoN3);
	Ayudante->EjecutarEstrategias();*/
	}

}


void AGalaga_USFX_L01GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	TimerController += DeltaTime;
	
	if (TimerController >= 5.0f && TimerController <= 5.032f) {

		Arqui->ConstruirObstaculos(1);
		Director->ConstruirPaqueteEnergia(1);
	

	}
	if (TimerController >= 15.0f && TimerController <= 15.032f) 
	{
		Arqui->ConstruirObstaculos(2);
		Director->ConstruirPaqueteEnergia(2);
		
	}
	if (TimerController >= 20.0f && TimerController <= 20.032f) {

		Arqui->ConstruirObstaculos(3);
		Director->ConstruirPaqueteEnergia(3);

	}
}