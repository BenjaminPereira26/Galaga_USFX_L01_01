// Fill out your copyright notice in the Description page of Project Settings.


#include "EstadoEstatico.h"

// Sets default values
AEstadoEstatico::AEstadoEstatico()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstadoEstatico::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstadoEstatico::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

