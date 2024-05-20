// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MainCanion.h"
#include "CanionBala.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ACanionBala : public AMainCanion
{
	GENERATED_BODY()
	ACanionBala();
	virtual void Disparar();
	float TimerDisparo;

public:
	virtual void Tick(float DeltaTime) override;


};
