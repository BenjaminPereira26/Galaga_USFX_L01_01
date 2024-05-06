// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Motor.h"
#include "MotorNodriza.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API AMotorNodriza : public AMotor
{
	GENERATED_BODY()
public:
	AMotorNodriza();
protected:
	class UMovimientoNaves* MovimientoNaves;
};
