// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IBuildPacketeCapsulas.h"
#include "DirectorCapsulasEnergia.generated.h"

UCLASS()
class GALAGA_USFX_L01_API ADirectorCapsulasEnergia : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADirectorCapsulasEnergia();
public:
	IIBuildPacketeCapsulas* BPE;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:
	void EstablecerConstructorPaquetes(AActor* _Constructor);
	void ConstruirPaqueteEnergia(int32 _Cont);
};
