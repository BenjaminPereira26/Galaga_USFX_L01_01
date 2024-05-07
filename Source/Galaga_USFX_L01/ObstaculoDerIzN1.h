// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Obstaculos.h"
#include "ObstaculoDerIzN1.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API AObstaculoDerIzN1 : public AObstaculos
{
	GENERATED_BODY()
public:
	AObstaculoDerIzN1();
private:
	float velocidad;
	float TimerDestruir;
protected:
	virtual void MoverDerIz(float DeltaTime);
	virtual void Destruir();

public:
	virtual void Tick(float DeltaTime) override;
};
