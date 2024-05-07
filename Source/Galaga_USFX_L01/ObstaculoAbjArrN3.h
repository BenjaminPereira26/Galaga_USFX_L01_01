// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Obstaculos.h"
#include "ObstaculoAbjArrN3.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API AObstaculoAbjArrN3 : public AObstaculos
{
	GENERATED_BODY()
public:
	AObstaculoAbjArrN3();
private:
	float velocidad;
	float TimerDestruir;
protected:
	virtual void MoverAbAr(float DeltaTime);
	virtual void Destruir();

public:
	virtual void Tick(float DeltaTime) override;
};
