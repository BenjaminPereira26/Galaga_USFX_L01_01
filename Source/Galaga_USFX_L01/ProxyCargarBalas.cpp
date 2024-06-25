// Fill out your copyright notice in the Description page of Project Settings.


#include "ProxyCargarBalas.h"
#include "RealCargarBalas.h"
// Sets default values
AProxyCargarBalas::AProxyCargarBalas()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RCB = nullptr;
}

// Called when the game starts or when spawned
void AProxyCargarBalas::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AProxyCargarBalas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AProxyCargarBalas::CargarCargador()
{
	if (!RCB) {
		RCB = GetWorld()->SpawnActor<ARealCargarBalas>(ARealCargarBalas::StaticClass());
		RCB->SetFinal(false);
		RCB->CargarCargador();
	}
	else {
		RCB->SetFinal(true);
		RCB->CargarCargador();
	}
}

