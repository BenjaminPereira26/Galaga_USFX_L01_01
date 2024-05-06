// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IBuilderNodriza.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIBuilderNodriza : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GALAGA_USFX_L01_API IIBuilderNodriza
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void BuildMotorNodriza() = 0;
	virtual void BuildChasisNodriza() = 0;
	virtual void BuildArmaNodriza() = 0;
};
