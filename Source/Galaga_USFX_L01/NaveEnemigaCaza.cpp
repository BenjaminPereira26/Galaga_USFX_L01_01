// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCaza.h"
#include "MovimientoNaves.h"

ANaveEnemigaCaza::ANaveEnemigaCaza()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_TriPyramid.Shape_TriPyramid'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	MovimientoNaves = CreateDefaultSubobject<UMovimientoNaves>(TEXT("MovementComponent"));
	NaveName = "Caza";
}

void ANaveEnemigaCaza::Mover(float DeltaTime)
{
	
}

void ANaveEnemigaCaza::Disparar()
{
}

void ANaveEnemigaCaza::Destruirse()
{
}

void ANaveEnemigaCaza::Recargar()
{
}

void ANaveEnemigaCaza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}
