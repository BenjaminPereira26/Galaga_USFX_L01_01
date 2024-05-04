// Fill out your copyright notice in the Description page of Project Settings.


#include "ConcretoBuildCapsulas.h"
#include "PacketeCapsulasEnergia.h"

// Sets default values
AConcretoBuildCapsulas::AConcretoBuildCapsulas()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AConcretoBuildCapsulas::BeginPlay()
{
	Super::BeginPlay();
	PaqueteEnergia = GetWorld()->SpawnActor<APacketeCapsulasEnergia>(APacketeCapsulasEnergia::StaticClass());
	PaqueteEnergia->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
}

// Called every frame
void AConcretoBuildCapsulas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AConcretoBuildCapsulas::BuildPacketeEnergia1()
{
	PaqueteEnergia->SetPacketeEnergia1();
}

void AConcretoBuildCapsulas::BuildPacketeEnergia2()
{
	PaqueteEnergia->SetPacketeEnergia2();
}

void AConcretoBuildCapsulas::BuildPacketeEnergia3()
{
	PaqueteEnergia->SetPacketeEnergia3();
}

