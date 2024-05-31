// Fill out your copyright notice in the Description page of Project Settings.

#include "NaveEnemigaKamikaze.h"
#include "IEstadoNE.h"
#include "EstadoActivo.h"
#include "EstadoDescontrolado.h"
#include "EstadoPasivo.h"


ANaveEnemigaKamikaze::ANaveEnemigaKamikaze()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Wedge_B.Shape_Wedge_B'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	PrimaryActorTick.bCanEverTick = true;
}

void ANaveEnemigaKamikaze::Mover(float DeltaTime)
{
	Estado->Mover(DeltaTime);
}


void ANaveEnemigaKamikaze::Disparar()
{
    Estado->Disparar();
}



void ANaveEnemigaKamikaze::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
	Disparar();
	Mover(DeltaTime);
	
}


void ANaveEnemigaKamikaze::InicializarEstado(FString _Estados)
{
	if (_Estados.Equals("Pasivo")) {
		EstadoPasivo = GetWorld()->SpawnActor<AEstadoPasivo>(AEstadoPasivo::StaticClass());
		EstadoPasivo->setNE(this);
		SetEstado(EstadoPasivo);
	}
	if (_Estados.Equals("Activo")) {
		EstadoActivo = GetWorld()->SpawnActor<AEstadoActivo>(AEstadoActivo::StaticClass());
		EstadoActivo->setNE(this);
		SetEstado(EstadoActivo);
	}
	/*if (_Estados.Equals("Descontrolado")) {
		EstadoDescontrolado = GetWorld()->SpawnActor<AEstadoDescontrolado>(AEstadoDescontrolado::StaticClass());
		EstadoDescontrolado->setNE(this);
		SetEstado(EstadoDescontrolado);
	}*/
}

void ANaveEnemigaKamikaze::SetEstado(IIEstadoNE* _Estado)
{
	Estado = _Estado;
}
