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
}

void AConcretoObstaculos::SetNivel2()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("Nivel 2")), true, FVector2D(1.5f, 1.5f));
}

void AConcretoObstaculos::SetNivel3()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Nivel 3")), true, FVector2D(1.5f, 1.5f));
}

