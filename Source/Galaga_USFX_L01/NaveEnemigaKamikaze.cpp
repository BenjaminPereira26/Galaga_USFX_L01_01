// Fill out your copyright notice in the Description page of Project Settings.

#include "NaveEnemigaKamikaze.h"
#include "MovimientoNaves.h"


void ANaveEnemigaKamikaze::ShotTimerExpired()
{
	bCanFire = false;
}

ANaveEnemigaKamikaze::ANaveEnemigaKamikaze()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Wedge_B.Shape_Wedge_B'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	PrimaryActorTick.bCanEverTick = true;
	MovimientoNaves = CreateDefaultSubobject<UMovimientoNaves>(TEXT("MovementComponent"));
	
}

void ANaveEnemigaKamikaze::Mover(float DeltaTime)
{
	
}

void ANaveEnemigaKamikaze::Destruirse()
{
}

void ANaveEnemigaKamikaze::Disparar()
{
    
}

void ANaveEnemigaKamikaze::CaidaLibre()
{
}

void ANaveEnemigaKamikaze::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
	Disparar();
	Mover(DeltaTime);
}
