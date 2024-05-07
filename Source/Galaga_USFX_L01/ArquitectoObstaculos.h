// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IBuilderObstaculos.h"
#include "ArquitectoObstaculos.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AArquitectoObstaculos : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AArquitectoObstaculos();
public:
	IIBuilderObstaculos* BO;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:
	void EstablecerConstructorObstaculos(AActor* _ConstructorObs);
	void ConstruirObstaculos(int32 _ContObs);
};
