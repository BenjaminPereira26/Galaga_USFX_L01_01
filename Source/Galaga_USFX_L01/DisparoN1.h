// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IEstrategias.h"
#include "DisparoN1.generated.h"

UCLASS()
class GALAGA_USFX_L01_API ADisparoN1 : public AActor, public IIEstrategias
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADisparoN1();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	void DispararNv() override;

	float TimerDisparo;
public:
	UPROPERTY()
	class AAyudantePawn* Ayudante;
};
