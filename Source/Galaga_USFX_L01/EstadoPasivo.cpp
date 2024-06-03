// Fill out your copyright notice in the Description page of Project Settings.


#include "EstadoPasivo.h"
#include "NaveEnemigaKamikaze.h"
// Sets default values
AEstadoPasivo::AEstadoPasivo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AEstadoPasivo::BeginPlay()
{
	Super::BeginPlay();
	Disparar();
}

// Called every frame
void AEstadoPasivo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEstadoPasivo::setNE(ANaveEnemigaKamikaze* _NEKamikaze)
{
	NEKamikaze = Cast<ANaveEnemigaKamikaze>(_NEKamikaze);
}

void AEstadoPasivo::Disparar()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Se Disparo pasivo")), true, FVector2D(1.5f, 1.5f));
}


