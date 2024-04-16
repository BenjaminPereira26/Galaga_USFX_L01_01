// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AgujeroNegro.h"
#include "MyAgujeroNegro.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API AMyAgujeroNegro : public AAgujeroNegro
{
	GENERATED_BODY()
public:
	AMyAgujeroNegro();
protected:
	virtual void Mover(float DeltaTime);
private:
	float TimerMov;
	float TimeSinceLastMove = 0.0f;
	const float MoveInterval = 5.0f; // Intervalo de 2 segundos
public:
	virtual void Tick(float DeltaTime) override;
};
