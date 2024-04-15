// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DisparoNaves.generated.h"

UCLASS()
class GALAGA_USFX_L01_API ADisparoNaves : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADisparoNaves();
	virtual void DispararProyectil();
	virtual void StartFireTimer();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
private:
    FTimerHandle TimerHandle_ShotTimerExpired;
	FTimerHandle TimerHandle_FireTimer;
    bool bCanFire;
    void ShotTimerExpired();
	float FireRate;
	FVector GunOffset;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
