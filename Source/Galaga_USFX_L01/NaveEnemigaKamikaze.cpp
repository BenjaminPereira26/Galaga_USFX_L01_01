// Fill out your copyright notice in the Description page of Project Settings.

#include "NaveEnemigaKamikaze.h"
#include "IEstadoNE.h"
#include "EstadoActivo.h"
#include "EstadoDescontrolado.h"
#include "EstadoPasivo.h"
#include "MovimientoNaves.h"


ANaveEnemigaKamikaze::ANaveEnemigaKamikaze()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Wedge_B.Shape_Wedge_B'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	PrimaryActorTick.bCanEverTick = true;
	MovimientoNaves = CreateDefaultSubobject<UMovimientoNaves>(TEXT("MovementComponent"));
}

void ANaveEnemigaKamikaze::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);	
}

void ANaveEnemigaKamikaze::BeginPlay()
{
	Super::BeginPlay();
	InicializarEstado("Pasivo");
	DispararK();
}

void ANaveEnemigaKamikaze::InicializarEstado(FString _Estados)
{
	if (_Estados.Equals("Activo"))
	{
		EstadoPasivo=GetWorld()->SpawnActor<AEstadoPasivo>(AEstadoPasivo::StaticClass());
		EstadoPasivo->setNE(this);
		SetEstado(EstadoPasivo);
		DispararK();
	}
	else if (_Estados.Equals("Pasivo"))
	{
		EstadoActivo = GetWorld()->SpawnActor<AEstadoActivo>(AEstadoActivo::StaticClass());
		EstadoActivo->setNE(this);
		SetEstado(EstadoActivo);
		DispararK();

	}
	else if (_Estados.Equals("Descontrolado"))
	{
		EstadoDescontrolado = GetWorld()->SpawnActor<AEstadoDescontrolado>(AEstadoDescontrolado::StaticClass());
		EstadoDescontrolado->setNE(this);
		SetEstado(EstadoDescontrolado);
		DispararK();
	}
}

void ANaveEnemigaKamikaze::SetEstado(IIEstadoNE* _Estado)
{
	Estado = _Estado;
}


void ANaveEnemigaKamikaze::DispararK()
{
	Estado->Disparar();
}

 