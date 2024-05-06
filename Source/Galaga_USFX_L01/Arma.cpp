// Fill out your copyright notice in the Description page of Project Settings.


#include "Arma.h"

// Sets default values
AArma::AArma()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	mallaArma = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TEXT"));
	mallaArma->SetupAttachment(RootComponent);
	RootComponent = mallaArma;
}

// Called when the game starts or when spawned
void AArma::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AArma::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

