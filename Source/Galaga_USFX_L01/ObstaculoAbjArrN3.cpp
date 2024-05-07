// Fill out your copyright notice in the Description page of Project Settings.


#include "ObstaculoAbjArrN3.h"

AObstaculoAbjArrN3::AObstaculoAbjArrN3()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CapsulaMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Wedge_B.Shape_Wedge_B'"));
	mallaObstaculo->SetStaticMesh(CapsulaMesh.Object);
	velocidad = -4;
}

void AObstaculoAbjArrN3::MoverAbAr(float DeltaTime)
{
	FVector PosicionActual = GetActorLocation();
	FVector NuevaPosicion = FVector(PosicionActual.X, PosicionActual.Y, PosicionActual.Z + 20.0f * DeltaTime * velocidad);

	SetActorLocation(NuevaPosicion);


	if (NuevaPosicion.Z > 600.0f || NuevaPosicion.Z < -600.0f) {
		velocidad = -velocidad;
	}
}

void AObstaculoAbjArrN3::Destruir()
{
}

void AObstaculoAbjArrN3::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	MoverAbAr(DeltaTime);
}
