// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "IEstadoNE.h"
#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaKamikaze.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaKamikaze : public ANaveEnemiga
{
	GENERATED_BODY()
private:

	
public:
	ANaveEnemigaKamikaze();

protected:
	virtual void Mover(float DeltaTime);
	virtual void Disparar();
	
public:
	virtual void Tick(float DeltaTime) override;

public:
	float velocidad;
public:
	IIEstadoNE* EstadoPasivo;
	IIEstadoNE* EstadoActivo;
	IIEstadoNE* EstadoDescontrolado;
	IIEstadoNE* Estado;

	FORCEINLINE void InicializarEstado(FString _Estados);
	FORCEINLINE void SetEstado(IIEstadoNE* _Estado);

};
