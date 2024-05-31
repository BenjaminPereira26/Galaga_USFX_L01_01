// Fill out your copyright notice in the Description page of Project Settings.


#include "ConcretoNodriza.h"
#include "MovimientoNaves.h"

// Sets default values
AConcretoNodriza::AConcretoNodriza()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	velocidad = 4;
}

// Called when the game starts or when spawned
void AConcretoNodriza::BeginPlay()
{
	Super::BeginPlay();
	
}


// Called every frame
void AConcretoNodriza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

void AConcretoNodriza::SetMotorNodriza()
{
	FVector SpawningLocationM = FVector(600.0f, 0.0f, 250.0f);
	FRotator SpawningRotationM = FRotator::ZeroRotator;
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Motor Nave Nodriza")), true, FVector2D(1.5f, 1.5f));
	MotorN=GetWorld()->SpawnActor<AMotorNodriza>(AMotorNodriza::StaticClass(), SpawningLocationM, SpawningRotationM);
}

void AConcretoNodriza::SetArmaNodriza()
{
	FVector SpawningLocationA = FVector(600.0f, 0.0f, 250.0f);
	FRotator SpawningRotationA = FRotator::ZeroRotator;
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("Arma Nave Nodriza")), true, FVector2D(1.5f, 1.5f));
	ArmaN=GetWorld()->SpawnActor<AArmaNodriza>(AArmaNodriza::StaticClass(), SpawningLocationA, SpawningRotationA);
}

void AConcretoNodriza::SetChasisNodriza()
{
	FVector SpawningLocationC = FVector(600.0f, 0.0f, 250.0f);
	FRotator SpawningRotationC = FRotator::ZeroRotator;
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Chasis Nave Nodriza")), true, FVector2D(1.5f, 1.5f));
	ChasisN=GetWorld()->SpawnActor<AChasisNodriza>(AChasisNodriza::StaticClass(), SpawningLocationC, SpawningRotationC);
}

void AConcretoNodriza::Mover(float DeltaTime)
{
	FVector PosicionActual = GetActorLocation();
	FVector NuevaPosicion = FVector(PosicionActual.X, PosicionActual.Y + 50.0f * DeltaTime * velocidad, PosicionActual.Z);
	SetActorLocation(NuevaPosicion);
	if (NuevaPosicion.Y > 950.0f || NuevaPosicion.Y < -500.0f) {
		velocidad = -velocidad;
	}
}

