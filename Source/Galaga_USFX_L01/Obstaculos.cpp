// Fill out your copyright notice in the Description page of Project Settings.


#include "Obstaculos.h"

// Sets default values
AObstaculos::AObstaculos()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	mallaObstaculo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TEXT"));
	mallaObstaculo->SetupAttachment(RootComponent);
	RootComponent = mallaObstaculo;
}

// Called when the game starts or when spawned
void AObstaculos::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AObstaculos::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

