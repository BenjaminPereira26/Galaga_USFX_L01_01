// Fill out your copyright notice in the Description page of Project Settings.


#include "MainCanion.h"

// Sets default values
AMainCanion::AMainCanion()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	mallaCanion = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TEXT"));
	mallaCanion->SetupAttachment(RootComponent);
	RootComponent = mallaCanion;
}

// Called when the game starts or when spawned
void AMainCanion::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMainCanion::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

