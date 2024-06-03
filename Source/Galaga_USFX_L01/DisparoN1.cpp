// Fill out your copyright notice in the Description page of Project Settings.


#include "DisparoN1.h"
#include "AyudantePawn.h"
#include "Galaga_USFX_L01Projectile.h"

// Sets default values
ADisparoN1::ADisparoN1()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADisparoN1::BeginPlay()
{
	Super::BeginPlay();
	Ayudante = GetWorld()->SpawnActor<AAyudantePawn>(AAyudantePawn::StaticClass());
	if (Ayudante)
	{
		Ayudante->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
	}
}

// Called every frame
void ADisparoN1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
    
}

void ADisparoN1::DispararNv()
{
    GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Green, FString::Printf(TEXT("Disparo1")));
    TimerDisparo += GetWorld()->GetDeltaSeconds();
    UWorld* const World = GetWorld();
    do {  TimerDisparo += GetWorld()->GetDeltaSeconds();
    if (TimerDisparo < 0.5f)
    {
        return;
    }

    if (Ayudante)
    {
        FVector SpawnLocation = Ayudante->GetActorLocation() + Ayudante->GetActorForwardVector() * 100.0f;
        FRotator SpawnRotation = Ayudante->GetActorRotation();
        
            World->SpawnActor<AGalaga_USFX_L01Projectile>(AGalaga_USFX_L01Projectile::StaticClass(), SpawnLocation, SpawnRotation);
            TimerDisparo = 0.0f;
        
    
    }
    } while (World != nullptr);
      
    
}

