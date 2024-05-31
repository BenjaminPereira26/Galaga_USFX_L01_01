// Fill out your copyright notice in the Description page of Project Settings.


#include "EstadoEnloquecido.h"

// Sets default values
AEstadoEnloquecido::AEstadoEnloquecido()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstadoEnloquecido::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstadoEnloquecido::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

