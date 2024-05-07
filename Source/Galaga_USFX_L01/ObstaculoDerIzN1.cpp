// Fill out your copyright notice in the Description page of Project Settings.


#include "ObstaculoDerIzN1.h"

AObstaculoDerIzN1::AObstaculoDerIzN1()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CapsulaMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Trim.Shape_Trim'"));
	mallaObstaculo->SetStaticMesh(CapsulaMesh.Object);
	velocidad = 4;
}

void AObstaculoDerIzN1::MoverDerIz(float DeltaTime)
{
	FVector PosicionActual = GetActorLocation();
	FVector NuevaPosicion = FVector(PosicionActual.X, PosicionActual.Y + 20.0f * DeltaTime * velocidad, PosicionActual.Z);

	SetActorLocation(NuevaPosicion);


	if (NuevaPosicion.Y > 300.0f || NuevaPosicion.Y < -500.0f) {
		velocidad = -velocidad;
	}
}

void AObstaculoDerIzN1::Destruir()
{
	/*TimerDestruir += GetWorld()->GetDeltaSeconds();
	if (TimerDestruir < 10.0f)
	{
		Destroy();
	}*/
}

void AObstaculoDerIzN1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	MoverDerIz(DeltaTime);
}
