// Fill out your copyright notice in the Description page of Project Settings.


#include "EstadoDescontrolado.h"
#include "NaveEnemigaKamikaze.h"
#include "Galaga_USFX_L01Projectile.h"


// Sets default values
AEstadoDescontrolado::AEstadoDescontrolado()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AEstadoDescontrolado::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstadoDescontrolado::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Disparar();
}

void AEstadoDescontrolado::setNE(ANaveEnemigaKamikaze* _NEKamikaze)
{
		NEKamikaze = Cast<ANaveEnemigaKamikaze>(_NEKamikaze);
}

void AEstadoDescontrolado::Disparar()
{
	TimerDisparo += GetWorld()->GetDeltaSeconds();
	if (TimerDisparo < 3.0f)
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

