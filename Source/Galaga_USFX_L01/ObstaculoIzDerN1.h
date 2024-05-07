// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Obstaculos.h"
#include "ObstaculoIzDerN1.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API AObstaculoIzDerN1 : public AObstaculos
{
	GENERATED_BODY()
public:
	AObstaculoIzDerN1();
private:
	float velocidad;
	float TimerDestruir;
protected:
	virtual void MoverIzDer(float DeltaTime);
	virtual void Destruir();

public:
	virtual void Tick(float DeltaTime) override;
};
