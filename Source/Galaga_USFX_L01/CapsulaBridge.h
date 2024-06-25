// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CapsulaEnergia.h"
#include "CapsulaBridge.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API ACapsulaBridge : public ACapsulaEnergia
{
	GENERATED_BODY()
private:
	float velocidad;
	int cantEnergia;
public:
	ACapsulaBridge();
	FORCEINLINE float GetVelocidad() const { return velocidad; }
	FORCEINLINE int GetCantEnergia() const { return cantEnergia; }

	FORCEINLINE void SetVelocidad(float _velocidad) { velocidad = _velocidad; }
	FORCEINLINE void SetCantEnergia(float _cantEnergia) { cantEnergia = _cantEnergia; }

protected:
	virtual void Mover(float DeltaTime);

public:
	virtual void Tick(float DeltaTime) override;

public:
	void EstablecerPersonaje(AActor* _Personaje);
	void VerificarCapsulaConsumida(FString _consumida, float _tiempo);
	void TiposCapsulas(FString _capsulas);
	void EmplearCapsula();

protected:
	class IIImplementacion* personaje;

};
