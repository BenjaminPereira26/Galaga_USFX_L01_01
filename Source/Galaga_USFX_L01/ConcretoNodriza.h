// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ISetNodriza.h"
#include "MotorNodriza.h"
#include "ArmaNodriza.h"
#include "ChasisNodriza.h"
#include "ConcretoNodriza.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AConcretoNodriza : public AActor, public IISetNodriza
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AConcretoNodriza();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	class UMovimientoNaves* MovimientoNaves;
	float velocidad;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:
	void SetMotorNodriza() override;
	void SetArmaNodriza() override;
	void SetChasisNodriza() override;
};
