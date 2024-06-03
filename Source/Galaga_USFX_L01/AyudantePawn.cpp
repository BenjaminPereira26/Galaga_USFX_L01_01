// Fill out your copyright notice in the Description page of Project Settings.


#include "AyudantePawn.h"
#include "IEstrategias.h"
#include "DisparoN1.h"
#include "DisparoN2.h"
#include "DisparoN3.h"
#include "MovimientoNaves.h"

AAyudantePawn::AAyudantePawn()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CapsulaMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
	mallaAyudante->SetStaticMesh(CapsulaMesh.Object);
	PrimaryActorTick.bCanEverTick = true;
}

void AAyudantePawn::BeginPlay()
{
	Super::BeginPlay();
}

void AAyudantePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AAyudantePawn::CambiarEstrategias(AActor* _Estrategias)
{
	Estrategia = Cast<IIEstrategias>(_Estrategias);
}

void AAyudantePawn::EjecutarEstrategias()
{
	Estrategia->DispararNv();
}





