// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FabricaNavesEnemigas.h"
#include "FNEEspia.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API AFNEEspia : public AFabricaNavesEnemigas
{
	GENERATED_BODY()
	virtual ANaveEnemiga* ConcoctNave(FString NaveSKU) override;
};
