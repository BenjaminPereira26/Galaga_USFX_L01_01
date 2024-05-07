// Fill out your copyright notice in the Description page of Project Settings.


#include "ConcretoObstaculos.h"

// Sets default values
AConcretoObstaculos::AConcretoObstaculos()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AConcretoObstaculos::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AConcretoObstaculos::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AConcretoObstaculos::SetNivel1()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Nivel 1")), true, FVector2D(1.5f, 1.5f));
	FVector SpawningLocationDI1 = FVector(-600.0f, 0.0f, 250.0f);
	FRotator SpawningRotationDI1 = FRotator::ZeroRotator;
	GetWorld()->SpawnActor<AObstaculoDerIzN1>(AObstaculoDerIzN1::StaticClass(), SpawningLocationDI1, SpawningRotationDI1);
	FVector SpawningLocationID1 = FVector(-600.0f, 0.0f, 250.0f);
	FRotator SpawningRotationID1 = FRotator::ZeroRotator;
	GetWorld()->SpawnActor<AObstaculoIzDerN1>(AObstaculoIzDerN1::StaticClass(), SpawningLocationID1, SpawningRotationID1);
}

void AConcretoObstaculos::SetNivel2()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("Nivel 2")), true, FVector2D(1.5f, 1.5f));
	FVector SpawningLocationArrA2 = FVector(-800.0f, 0.0f, 250.0f);
	FRotator SpawningRotationArrA2 = FRotator::ZeroRotator;
	GetWorld()->SpawnActor<AObstaculoArrAbjN2>(AObstaculoArrAbjN2::StaticClass(), SpawningLocationArrA2, SpawningRotationArrA2);
}

void AConcretoObstaculos::SetNivel3()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Nivel 3")), true, FVector2D(1.5f, 1.5f));
	FVector SpawningLocationAArr3 = FVector(-1000.0f, 0.0f, 250.0f);
	FRotator SpawningRotationAArr3 = FRotator::ZeroRotator;
	GetWorld()->SpawnActor<AObstaculoAbjArrN3>(AObstaculoAbjArrN3::StaticClass(), SpawningLocationAArr3, SpawningRotationAArr3);
	FVector SpawningLocationAArr31 = FVector(-1000.0f, 500.0f, 250.0f);
	FRotator SpawningRotationAArr31 = FRotator::ZeroRotator;
	GetWorld()->SpawnActor<AObstaculoAbjArrN3>(AObstaculoAbjArrN3::StaticClass(), SpawningLocationAArr31, SpawningRotationAArr31);
	FVector SpawningLocationAArr32 = FVector(-1000.0f, -500.0f, 250.0f);
	FRotator SpawningRotationAArr32 = FRotator::ZeroRotator;
	GetWorld()->SpawnActor<AObstaculoAbjArrN3>(AObstaculoAbjArrN3::StaticClass(), SpawningLocationAArr32, SpawningRotationAArr32);

}

