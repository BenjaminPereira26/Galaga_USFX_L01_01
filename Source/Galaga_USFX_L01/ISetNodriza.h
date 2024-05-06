// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ISetNodriza.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UISetNodriza : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GALAGA_USFX_L01_API IISetNodriza
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void SetMotorNodriza() = 0;
	virtual void SetChasisNodriza() = 0;
	virtual void SetArmaNodriza() = 0;
};
