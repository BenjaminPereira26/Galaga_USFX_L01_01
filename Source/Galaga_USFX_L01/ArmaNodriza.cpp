// Fill out your copyright notice in the Description page of Project Settings.


#include "ArmaNodriza.h"
#include "Galaga_USFX_L01Projectile.h"
#include "MovimientoNaves.h"

AArmaNodriza::AArmaNodriza()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ArmaMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Pipe.Shape_Pipe'"));
	mallaArma->SetStaticMesh(ArmaMesh.Object);
}

void AArmaNodriza::Disparar()
{
    TimerDisparo += GetWorld()->GetDeltaSeconds();
    if (TimerDisparo < 0.01f)
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


void AArmaNodriza::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
	Disparar();

}
