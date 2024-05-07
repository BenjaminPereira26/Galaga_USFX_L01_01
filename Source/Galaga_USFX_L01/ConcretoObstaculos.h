// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ISetObstaculos.h"
#include "ObstaculoDerIzN1.h"
#include "ObstaculoIzDerN1.h"
#include "ObstaculoArrAbjN2.h"
#include "ObstaculoAbjArrN3.h"

#include "ConcretoObstaculos.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AConcretoObstaculos : public AActor, public IISetObstaculos
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AConcretoObstaculos();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:
	virtual void SetNivel1() override;
	virtual void SetNivel2() override;
	virtual void SetNivel3() override;
};
