// Fill out your copyright notice in the Description page of Project Settings.


#include "Barreras.h"

// Sets default values for this component's properties
UBarreras::UBarreras()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UBarreras::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

void UBarreras::Proteger()
{
	FVector PosicionActual = GetOwner()->GetActorLocation()+FVector(100.0f,0.0f,0.0f);
	int contador = 0;
	do {
		
		if(contador==0){
			ABarrera* Barrera = GetWorld()->SpawnActor<ABarrera>(BarrierClass, PosicionActual, FRotator::ZeroRotator);
			
		}
	
	} while (contador!=1);
}


// Called every frame
void UBarreras::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	Proteger();
	// ...
}

