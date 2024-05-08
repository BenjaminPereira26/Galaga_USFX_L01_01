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

	UWorld* const World = GetWorld();
	for (int i = 0; i < 2; i++) {
		FVector PosicionNaveActual = FVector(-600.0f, 0.0f + i * 200.0f, 250.0f);
		AObstaculoDerIzN1* ObsT1 = World->SpawnActor<AObstaculoDerIzN1>(PosicionNaveActual, FRotator::ZeroRotator);

		
		TAODIN1.Push(ObsT1);
	}
	for (int i = 0; i < 2; i++) {
		FVector PosicionNaveActual = FVector(-600.0f, 0.0f - i * 200.0f, 250.0f);
		AObstaculoIzDerN1* ObsT2 = World->SpawnActor<AObstaculoIzDerN1>(PosicionNaveActual, FRotator::ZeroRotator);

		TAOIDN1.Push(ObsT2);
	}

}

void AConcretoObstaculos::SetNivel2()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("Nivel 2")), true, FVector2D(1.5f, 1.5f));
	
	UWorld* const World = GetWorld();
	for (int i = 0; i < 3; i++) {
		FVector PosicionNaveActual = FVector(-800.0f, -300.0f + i * 300.0f, 250.0f);
		AObstaculoArrAbjN2* ObsT3 = World->SpawnActor<AObstaculoArrAbjN2>(PosicionNaveActual, FRotator::ZeroRotator);

		TAOArAbN2.Push(ObsT3);
	}
}

void AConcretoObstaculos::SetNivel3()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Nivel 3")), true, FVector2D(1.5f, 1.5f));
	
	UWorld* const World = GetWorld();
	for (int i = 0; i < 3; i++) {
		FVector PosicionNaveActual = FVector(-1000.0f, -500.0f + i * 500.0f, 250.0f);
		AObstaculoAbjArrN3* ObsT4 = World->SpawnActor<AObstaculoAbjArrN3>(PosicionNaveActual, FRotator::ZeroRotator);

		TAOAbArN3.Push(ObsT4);
	}
}

