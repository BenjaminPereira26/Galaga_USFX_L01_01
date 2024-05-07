// Fill out your copyright notice in the Description page of Project Settings.


#include "ConcretoBuilderObstaculos.h"
#include "ConcretoObstaculos.h"

// Sets default values
AConcretoBuilderObstaculos::AConcretoBuilderObstaculos()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AConcretoBuilderObstaculos::BeginPlay()
{
	Super::BeginPlay();
	Obstaculo = GetWorld()->SpawnActor<AConcretoObstaculos>(AConcretoObstaculos::StaticClass());
	Obstaculo->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
}

// Called every frame
void AConcretoBuilderObstaculos::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AConcretoBuilderObstaculos::BuildNivel1()
{
	Obstaculo->SetNivel1();
}

void AConcretoBuilderObstaculos::BuildNivel2()
{
	Obstaculo->SetNivel2();
}

void AConcretoBuilderObstaculos::BuildNivel3()
{
	Obstaculo->SetNivel3();
}

