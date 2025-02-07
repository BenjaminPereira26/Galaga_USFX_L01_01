// Fill out your copyright notice in the Description page of Project Settings.


#include "Record.h"

// Sets default values
ARecord::ARecord()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARecord::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARecord::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ARecord::CambioPuntaje()
{
	NotificadorSubscriptores();
}

void ARecord::SetPuntaje(FString _Puntos)
{
	Puntaje = _Puntos;
	CambioPuntaje();
}

FString ARecord::GetPuntaje()
{
	return Puntaje;
}

