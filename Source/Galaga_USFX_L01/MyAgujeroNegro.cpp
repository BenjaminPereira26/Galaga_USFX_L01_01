// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAgujeroNegro.h"

AMyAgujeroNegro::AMyAgujeroNegro()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CapsulaMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Plane.Shape_Plane'"));
	mallaAgujero->SetStaticMesh(CapsulaMesh.Object);

}

void AMyAgujeroNegro::Mover(float DeltaTime)
{
    TimeSinceLastMove += DeltaTime;

    if (TimeSinceLastMove >= MoveInterval)
    {
        FVector PosicionActual = GetActorLocation();
        FVector NuevaPosicion = FVector(FMath::RandRange(1800.0f, 300.0f), FMath::RandRange(-500.0f, 200.0f), PosicionActual.Z);
        SetActorLocation(NuevaPosicion);

        TimeSinceLastMove = 0.0f; // Reiniciar el contador
    }
}

void AMyAgujeroNegro::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}
