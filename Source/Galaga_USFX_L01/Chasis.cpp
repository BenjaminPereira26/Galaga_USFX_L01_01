// Fill out your copyright notice in the Description page of Project Settings.


#include "Chasis.h"

// Sets default values
AChasis::AChasis()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	mallaChasis = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TEXT"));
	mallaChasis->SetupAttachment(RootComponent);
	RootComponent = mallaChasis;
}

// Called when the game starts or when spawned
void AChasis::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AChasis::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

