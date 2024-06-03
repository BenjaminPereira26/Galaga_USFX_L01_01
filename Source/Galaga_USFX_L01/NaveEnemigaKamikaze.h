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
	
public:
	virtual void Tick(float DeltaTime) override;
	virtual void BeginPlay() override;
	class UMovimientoNaves* MovimientoNaves;

public:
	float velocidad;
	void InicializarEstado(FString _Estados);

	IIEstadoNE* EstadoActivo;
	IIEstadoNE* EstadoPasivo;
	IIEstadoNE* EstadoDescontrolado;
	IIEstadoNE* Estado;

	void SetEstado(IIEstadoNE* _Estado);
	void DispararK();
};
