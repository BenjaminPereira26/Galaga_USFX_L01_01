// Fill out your copyright notice in the Description page of Project Settings.


#include "DisparoN2.h"
#include "Galaga_USFX_L01Projectile.h"

// Sets default values
ADisparoN2::ADisparoN2()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADisparoN2::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADisparoN2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	DispararNv();
}

void ADisparoN2::DispararNv()
{
	TimerDisparo += GetWorld()->GetDeltaSeconds();
	if (TimerDisparo < 0.5f) {
		return;
	}
	FVector SpawnLocation = FVector(-740.0f, -450.0f, 214.72f);
	FRotator SpawnRotation = FRotator(1.0f, .0f, 0.0f);
	UWorld* const World = GetWorld();
	if (World != nullptr) {
		World->SpawnActor<AGalaga_USFX_L01Projectile>(AGalaga_USFX_L01Projectile::StaticClass(), SpawnLocation, SpawnRotation);
		TimerDisparo = 0.0f;
	}
}

