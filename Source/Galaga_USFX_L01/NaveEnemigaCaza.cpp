// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCaza.h"
#include "MovimientoNaves.h"

ANaveEnemigaCaza::ANaveEnemigaCaza()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_TriPyramid.Shape_TriPyramid'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	MovimientoNaves = CreateDefaultSubobject<UMovimientoNaves>(TEXT("MovementComponent"));
	NaveName = "Caza";
	TiempoCapsula = 0.0f;
	TipoPoder = "";
	VerificarCapsula = true;
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

bool ANaveEnemigaCaza::CapsulaConsumida(FString _consumida)
{
	if (_consumida.Equals("consumida"))
	{
		return true;
	}
	return false;
}

void ANaveEnemigaCaza::HabilitarCapsula(float _tiempo)
{
	TiempoCapsula = _tiempo;
	VerificarCapsula = false;
}

bool ANaveEnemigaCaza::DesHabilitarCapsula()
{
	return VerificarCapsula;
}

FString ANaveEnemigaCaza::ObtenerTipoPoder()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Duracion: %f"), TiempoCapsula));
	return TipoPoder;
}

void ANaveEnemigaCaza::EstablecerTipoPoder(FString _Poder)
{
	TipoPoder = _Poder;
}
