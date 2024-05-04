// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IBuildPacketeCapsulas.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIBuildPacketeCapsulas : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GALAGA_USFX_L01_API IIBuildPacketeCapsulas
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void BuildPacketeEnergia1() = 0;
	virtual void BuildPacketeEnergia2() = 0;
	virtual void BuildPacketeEnergia3() = 0;
};
