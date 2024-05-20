// Fill out your copyright notice in the Description page of Project Settings.


#include "CanionLazer.h"
#include "Galaga_USFX_L01Projectile.h"

ACanionLazer::ACanionLazer()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ArmaMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Trim_90_In.Shape_Trim_90_In'"));
	mallaCanion->SetStaticMesh(ArmaMesh.Object);
}

void ACanionLazer::Disparar()
{
    TimerDisparo += GetWorld()->GetDeltaSeconds();
    if (TimerDisparo < 2.0f)
    {
        return;
    }
    FVector FireDirection = -GetActorForwardVector();
    FVector SpawnLocation = GetActorLocation() + FireDirection * 100.0f;
    FRotator SpawnRotation = FireDirection.Rotation();
    UWorld* const World = GetWorld();
    if (World != nullptr)
    {
        World->SpawnActor<AGalaga_USFX_L01Projectile>(AGalaga_USFX_L01Projectile::StaticClass(), SpawnLocation, SpawnRotation);
        TimerDisparo = 0.0f;
    }
}

void ACanionLazer::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
	Disparar();
}
    