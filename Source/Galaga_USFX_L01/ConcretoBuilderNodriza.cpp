// Fill out your copyright notice in the Description page of Project Settings.


#include "ConcretoBuilderNodriza.h"
#include "ConcretoNodriza.h"
// Sets default values
AConcretoBuilderNodriza::AConcretoBuilderNodriza()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AConcretoBuilderNodriza::BeginPlay()
{
	Super::BeginPlay();
	Nodriza = GetWorld()->SpawnActor<AConcretoNodriza>(AConcretoNodriza::StaticClass());
	Nodriza->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
}

// Called every frame
void AConcretoBuilderNodriza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AConcretoBuilderNodriza::BuildMotorNodriza()
{
	Nodriza->SetMotorNodriza();
}

void AConcretoBuilderNodriza::BuildArmaNodriza()
{
	Nodriza->SetArmaNodriza();
}

void AConcretoBuilderNodriza::BuildChasisNodriza()
{
	Nodriza->SetChasisNodriza();
}

