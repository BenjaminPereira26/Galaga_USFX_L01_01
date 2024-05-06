// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Arma.h"
#include "ArmaNodriza.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API AArmaNodriza : public AArma
{
	GENERATED_BODY()
public:
	AArmaNodriza();
	virtual void Disparar();
	float TimerDisparo;
	class UMovimientoNaves* MovimientoNaves;
public:
	virtual void Tick(float DeltaTime) override;

};
