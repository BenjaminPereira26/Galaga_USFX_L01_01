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

}

void AConcretoNodriza::SetMotorNodriza()
{
	FVector SpawningLocationM = FVector(-300.0f, 0.0f, 250.0f);
	FRotator SpawningRotationM = FRotator::ZeroRotator;
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Motor Nave Nodriza")), true, FVector2D(1.5f, 1.5f));
	GetWorld()->SpawnActor<AMotorNodriza>(AMotorNodriza::StaticClass(), SpawningLocationM, SpawningRotationM);
}

void AConcretoNodriza::SetArmaNodriza()
{
	FVector SpawningLocationA = FVector(-300.0f, 0.0f, 250.0f);
	FRotator SpawningRotationA = FRotator::ZeroRotator;
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("Arma Nave Nodriza")), true, FVector2D(1.5f, 1.5f));
	GetWorld()->SpawnActor<AArmaNodriza>(AArmaNodriza::StaticClass(), SpawningLocationA, SpawningRotationA);
}

void AConcretoNodriza::SetChasisNodriza()
{
	FVector SpawningLocationC = FVector(-300.0f, 0.0f, 250.0f);
	FRotator SpawningRotationC = FRotator::ZeroRotator;
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Chasis Nave Nodriza")), true, FVector2D(1.5f, 1.5f));
	GetWorld()->SpawnActor<AChasisNodriza>(AChasisNodriza::StaticClass(), SpawningLocationC, SpawningRotationC);
}

