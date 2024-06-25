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
	
}





 