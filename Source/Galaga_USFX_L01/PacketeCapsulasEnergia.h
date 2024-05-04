// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ISetPacketeCapsulas.h"
#include "PacketeCapsulasEnergia.generated.h"

UCLASS()
class GALAGA_USFX_L01_API APacketeCapsulasEnergia : public AActor, public IISetPacketeCapsulas
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APacketeCapsulasEnergia();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:
	void SetPacketeEnergia1() override;
	void SetPacketeEnergia2() override;
	void SetPacketeEnergia3() override;
};
