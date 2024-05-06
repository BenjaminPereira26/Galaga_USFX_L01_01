// Fill out your copyright notice in the Description page of Project Settings.


#include "PacketeCapsulasEnergia.h"

// Sets default values
APacketeCapsulasEnergia::APacketeCapsulasEnergia()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APacketeCapsulasEnergia::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APacketeCapsulasEnergia::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APacketeCapsulasEnergia::SetPacketeEnergia1()
{
	FVector SpawningLocation50 = FVector(1500.0f, FMath::RandRange(-500.0f, 200.0f) + 100.0f, 250.0f);
	FRotator SpawningRotation50 = FRotator::ZeroRotator;
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Paquete de energia 1")), true, FVector2D(1.5f, 1.5f));
	/*GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Energia 50%%")), true, FVector2D(1.5f, 1.5f));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Energia 70%%")), true, FVector2D(1.5f, 1.5f));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Energia 23%%")), true, FVector2D(1.5f, 1.5f));*/
	GetWorld()->SpawnActor<ACapsulaEnergia50pts>(ACapsulaEnergia50pts::StaticClass(),SpawningLocation50,SpawningRotation50);
}

void APacketeCapsulasEnergia::SetPacketeEnergia2()
{
	FVector SpawningLocation100 = FVector(1500.0f, FMath::RandRange(-500.0f, 200.0f) + 100.0f, 250.0f);
	FRotator SpawningRotation100 = FRotator::ZeroRotator;
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Paquete de energia 2")), true, FVector2D(1.5f, 1.5f));
	/*GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Energia 500%%")), true, FVector2D(1.5f, 1.5f));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Energia 100%%")), true, FVector2D(1.5f, 1.5f));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Energia 300%%")), true, FVector2D(1.5f, 1.5f));*/
	GetWorld()->SpawnActor<ACapsulaEnergia100pts>(ACapsulaEnergia100pts::StaticClass(), SpawningLocation100, SpawningRotation100);
}

void APacketeCapsulasEnergia::SetPacketeEnergia3()
{
	FVector SpawningLocation200 = FVector(1500.0f, FMath::RandRange(-500.0f, 200.0f) + 100.0f, 250.0f);
	FRotator SpawningRotation200 = FRotator::ZeroRotator;
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("Paquete de energia 3")), true, FVector2D(1.5f, 1.5f));
	/*GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("Energia 1%%")), true, FVector2D(1.5f, 1.5f));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("Energia 5%%")), true, FVector2D(1.5f, 1.5f));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("Energia 7%%")), true, FVector2D(1.5f, 1.5f));*/
	GetWorld()->SpawnActor<ACapsulaEnergia200pts>(ACapsulaEnergia200pts::StaticClass(), SpawningLocation200, SpawningRotation200);
}

