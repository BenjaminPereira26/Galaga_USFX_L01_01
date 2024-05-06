// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Chasis.h"
#include "ChasisNodriza.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API AChasisNodriza : public AChasis
{
	GENERATED_BODY()
public:
	AChasisNodriza();
	protected:
		class UMovimientoNaves* MovimientoNaves;
};
