// Fill out your copyright notice in the Description page of Project Settings.


#include "DisparoNaves.h"
#include "Galaga_USFX_L01Projectile.h"

// Sets default values
ADisparoNaves::ADisparoNaves()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	bCanFire = true;
	FireRate = 2.0f;
	GunOffset = FVector(100.0f, 0.0f, 0.0f); 

}

void ADisparoNaves::DispararProyectil()
{
	if (bCanFire == true) {
		const FRotator FireRotation = GetActorRotation();
		const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);

		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			World->SpawnActor<AGalaga_USFX_L01Projectile>(SpawnLocation, FireRotation);
		}

		bCanFire = false;
		World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &ADisparoNaves::ShotTimerExpired, FireRate);

		bCanFire = false;
	}
}


void ADisparoNaves::StartFireTimer()
{

}

// Called when the game starts or when spawned
void ADisparoNaves::BeginPlay()
{
	Super::BeginPlay();
	
}

void ADisparoNaves::ShotTimerExpired()
{
		bCanFire = true;
}

// Called every frame
void ADisparoNaves::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

