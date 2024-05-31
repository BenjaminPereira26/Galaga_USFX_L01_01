// Fill out your copyright notice in the Description page of Project Settings.


#include "SuscriptorPrueba.h"
#include "Record.h"
// Sets default values
ASuscriptorPrueba::ASuscriptorPrueba()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Puntaje = "";
}

// Called when the game starts or when spawned
void ASuscriptorPrueba::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASuscriptorPrueba::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASuscriptorPrueba::EstablecerRecord(ARecord* _RecordSub)
{
	if (!_RecordSub) {
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, FString::Printf(TEXT
		("El record del subscriptor no existe")));
		return;
	}
	Record = _RecordSub;
	Record->Subscribirse(this);
}

void ASuscriptorPrueba::Actualizar(APublicadorObserver* _Publicador)
{
	TransformarSubscriptor();
}

void ASuscriptorPrueba::TransformarSubscriptor()
{
	Puntaje = Record->GetPuntaje();
	if (Puntaje.Equals("100pts")) {
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Cyan, FString::Printf(TEXT
		("Son las %s, transformate en NaveEnemiga"), *Puntaje));
	}
	if (Puntaje.Equals("200pts")) {
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Cyan, FString::Printf(TEXT
		("Son las %s, transformate en una capsula"), *Puntaje));
	}
	if (Puntaje.Equals("300pts")) {
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Cyan, FString::Printf(TEXT
		("Son las %s, transformate en un jugador auxiliar"), *Puntaje));
	}
}

void ASuscriptorPrueba::DestruirSubscripcion()
{
		Record->DeSubscribirse(this);
}

