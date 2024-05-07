// Fill out your copyright notice in the Description page of Project Settings.


#include "ObstaculoArrAbjN2.h"

AObstaculoArrAbjN2::AObstaculoArrAbjN2()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CapsulaMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Wedge_B.Shape_Wedge_B'"));
	mallaObstaculo->SetStaticMesh(CapsulaMesh.Object);
	velocidad = 4;
}

void AObstaculoArrAbjN2::MoverArAb(float DeltaTime)
{
	FVector PosicionActual = GetActorLocation();
	FVector NuevaPosicion = FVector(PosicionActual.X, PosicionActual.Y , PosicionActual.Z+ 20.0f * DeltaTime * velocidad);

	SetActorLocation(NuevaPosicion);


	if (NuevaPosicion.Z > 600.0f || NuevaPosicion.Z < -600.0f) {
		velocidad = -velocidad;
	}
}

void AObstaculoArrAbjN2::Destruir()
{
}

void AObstaculoArrAbjN2::Tick(float DeltaTime)
{
		Super::Tick(DeltaTime);
	MoverArAb(DeltaTime);
}
