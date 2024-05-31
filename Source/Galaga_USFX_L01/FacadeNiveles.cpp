// Fill out your copyright notice in the Description page of Project Settings.


#include "FacadeNiveles.h"
#include "FacadeNaveEnemigas.h"
// Sets default values
AFacadeNiveles::AFacadeNiveles()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFacadeNiveles::BeginPlay()
{
	Super::BeginPlay();
	FacadeNE = GetWorld()->SpawnActor<AFacadeNaveEnemigas>(AFacadeNaveEnemigas::StaticClass());

}

// Called every frame
void AFacadeNiveles::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFacadeNiveles::setNENivel1()
{
	FacadeNE->setFlotaNETransporte();
	FacadeNE->setFlotaNEReabastecimiento();
}

void AFacadeNiveles::setNENivel2()
{
	FacadeNE->setFlotaNEEspia();
	FacadeNE->setFlotaNENodriza();
}

void AFacadeNiveles::setNENivel3()
{
	FacadeNE->setFlotaNECaza();
	FacadeNE->setFlotaNEKamikaze();
}

void AFacadeNiveles::setNivel(int32 _Nivel)
{
	if (_Nivel == 1) {
		setNENivel1();
	}
	else if (_Nivel == 2) {
		setNENivel2();
	}
	else if (_Nivel == 3) {
		setNENivel3();
	}
}


