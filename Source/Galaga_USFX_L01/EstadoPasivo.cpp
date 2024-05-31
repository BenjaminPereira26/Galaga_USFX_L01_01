// Fill out your copyright notice in the Description page of Project Settings.


#include "EstadoPasivo.h"
#include "NaveEnemigaKamikaze.h"
// Sets default values
AEstadoPasivo::AEstadoPasivo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	velocidad = 2;
}

// Called when the game starts or when spawned
void AEstadoPasivo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstadoPasivo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void AEstadoPasivo::setNE(ANaveEnemigaKamikaze* _NEKamikaze)
{
	NEKamikaze = Cast<ANaveEnemigaKamikaze>(_NEKamikaze);
}

void AEstadoPasivo::Mover(float DeltaTime)
{
	FVector PosicionActual = GetOwner()->GetActorLocation();
	FVector NuevaPosicion = FVector(PosicionActual.X, PosicionActual.Y + 50.0f * DeltaTime * velocidad, PosicionActual.Z);
	GetOwner()->SetActorLocation(NuevaPosicion);
	if (NuevaPosicion.Y > 950.0f || NuevaPosicion.Y < -500.0f) {
		velocidad = -velocidad;
	}
}

