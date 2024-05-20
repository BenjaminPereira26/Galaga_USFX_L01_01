// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MainCanion.h"
#include "CanionHielo.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ACanionHielo : public AMainCanion
{
	GENERATED_BODY()
	ACanionHielo();
	virtual void Disparar();
	float TimerDisparo;

public:
	virtual void Tick(float DeltaTime) override;

};
