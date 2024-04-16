// Fill out your copyright notice in the Description page of Project Settings.


#include "AgujeroNegro.h"

// Sets default values
AAgujeroNegro::AAgujeroNegro()
{
	mallaAgujero = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	//mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);
	mallaAgujero->SetupAttachment(RootComponent);
	RootComponent = mallaAgujero;
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAgujeroNegro::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAgujeroNegro::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

