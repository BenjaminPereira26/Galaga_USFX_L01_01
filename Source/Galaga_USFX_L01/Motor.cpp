// Fill out your copyright notice in the Description page of Project Settings.


#include "Motor.h"

// Sets default values
AMotor::AMotor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	mallaMotor = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TEXT"));
	mallaMotor->SetupAttachment(RootComponent);
	RootComponent = mallaMotor;
}

// Called when the game starts or when spawned
void AMotor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMotor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

