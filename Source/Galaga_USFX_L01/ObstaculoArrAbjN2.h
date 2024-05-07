// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Obstaculos.h"
#include "ObstaculoArrAbjN2.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API AObstaculoArrAbjN2 : public AObstaculos
{
	GENERATED_BODY()
public:
	AObstaculoArrAbjN2();
private:
	float velocidad;
	float TimerDestruir;
protected:
	virtual void MoverArAb(float DeltaTime);
	virtual void Destruir();

public:
	virtual void Tick(float DeltaTime) override;
};
