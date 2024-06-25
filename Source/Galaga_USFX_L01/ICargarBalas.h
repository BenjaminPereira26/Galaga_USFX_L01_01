// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ICargarBalas.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UICargarBalas : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GALAGA_USFX_L01_API IICargarBalas
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.

public:

	virtual void TomarCajaMunicion() = 0;
	virtual void CheckEstadoMunicion() = 0;
	virtual void CantBalasBE() = 0;
	virtual void FinalReloadBalas() = 0;
	virtual void CargarCargador() = 0;

};
