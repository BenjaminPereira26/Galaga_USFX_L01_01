// Fill out your copyright notice in the Description page of Project Settings.


#include "ObstaculoIzDerN1.h"

AObstaculoIzDerN1::AObstaculoIzDerN1()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CapsulaMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Trim.Shape_Trim'"));
	mallaObstaculo->SetStaticMesh(CapsulaMesh.Object);
	velocidad = -4;
}

void AObstaculoIzDerN1::MoverIzDer(float DeltaTime)
{
	FVector PosicionActual = GetActorLocation();
	FVector NuevaPosicion = FVector(PosicionActual.X, PosicionActual.Y + 20.0f * DeltaTime * velocidad, PosicionActual.Z);

	SetActorLocation(NuevaPosicion);


	if (NuevaPosicion.Y > 300.0f || NuevaPosicion.Y < -500.0f) {
		velocidad = -velocidad;
	}
}

void AObstaculoIzDerN1::Destruir()
{
}

void AObstaculoIzDerN1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	MoverIzDer(DeltaTime);
}
