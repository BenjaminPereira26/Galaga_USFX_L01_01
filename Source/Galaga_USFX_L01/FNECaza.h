// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FabricaNavesEnemigas.h"
#include "FNECaza.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API AFNECaza : public AFabricaNavesEnemigas
{
	GENERATED_BODY()
public:
	//Concoct the selected potion
	virtual ANaveEnemiga* ConcoctNave(FString NaveSKU) override;
};
