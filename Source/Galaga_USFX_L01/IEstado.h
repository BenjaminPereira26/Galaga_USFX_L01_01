// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IEstado.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIEstado : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GALAGA_USFX_L01_API IIEstado
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void EstablecerEstado(class AConcretoNodriza* _ConcretoNodriza) = 0;
	virtual void ModoEstatico() = 0;
	virtual void ModoAtaque() = 0;
	virtual void ModoEnloquecido() = 0;
};
