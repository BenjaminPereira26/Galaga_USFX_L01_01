// Fill out your copyright notice in the Description page of Project Settings.


#include "Ayudante.h"

// Sets default values
AAyudante::AAyudante()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	mallaAyudante = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TEXT"));
	mallaAyudante->SetupAttachment(RootComponent);
	RootComponent = mallaAyudante;
}

// Called when the game starts or when spawned
void AAyudante::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAyudante::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

