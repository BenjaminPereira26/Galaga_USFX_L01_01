// Fill out your copyright notice in the Description page of Project Settings.

#include "NaveEnemigaKamikaze.h"
#include "Galaga_USFX_L01Projectile.h"
#include "MyAgujeroNegro.h"
#include "MovimientoNaves.h"



ANaveEnemigaKamikaze::ANaveEnemigaKamikaze()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Wedge_B.Shape_Wedge_B'"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	PrimaryActorTick.bCanEverTick = true;
	MovimientoNaves = CreateDefaultSubobject<UMovimientoNaves>(TEXT("MovementComponent"));
	NaveName = "Kamikaze";
}

void ANaveEnemigaKamikaze::Mover(float DeltaTime)
{
	
}

void ANaveEnemigaKamikaze::Destruirse()
{
}

void ANaveEnemigaKamikaze::Disparar()
{
    TimerDisparo += GetWorld()->GetDeltaSeconds();
    if (TimerDisparo < 2.0f)
    {
        return; 
    }
    FVector FireDirection = -GetActorForwardVector();
    FVector SpawnLocation = GetActorLocation() + FireDirection * 100.0f;
    FRotator SpawnRotation = FireDirection.Rotation();
    UWorld* const World = GetWorld();
        if (World != nullptr)
    {
         World->SpawnActor<AGalaga_USFX_L01Projectile>(AGalaga_USFX_L01Projectile::StaticClass(), SpawnLocation, SpawnRotation);
         TimerDisparo = 0.0f;
    }
}

void ANaveEnemigaKamikaze::CaidaLibre()
{
}

FVector ANaveEnemigaKamikaze::ObtenerUbicacionObjetoQueSemueve()
{
    if (ObjetoQueSemueve)
    {
        return ObjetoQueSemueve->GetActorLocation();
    }
    return FVector::ZeroVector;
}

void ANaveEnemigaKamikaze::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
	Disparar();
	Mover(DeltaTime);
	FVector UbicacionObjeto = ObtenerUbicacionObjetoQueSemueve();
	FVector UbicacionPawn = GetActorLocation();

	float Distancia = FVector::Dist(UbicacionObjeto, UbicacionPawn);

	// Definir un umbral pequeño para considerar las posiciones como iguales
	float Umbral = 100.0f; // Puedes ajustar este valor según sea necesario

	// Verificar si la distancia es menor que el umbral
	if (Distancia < Umbral)
	{
		// Establecer la velocidad a 0.0f
		velocidad = 0.0f;
	}
	else
	{
		// Restaurar la velocidad original
		velocidad = 4.0f;
	}
}
