// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

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
	int tiempoSuicidio;
	float TimerDisparo;
	
public:
	ANaveEnemigaKamikaze();
public:
	UPROPERTY(EditAnywhere)
	class AMyAgujeroNegro* ObjetoQueSemueve; // Referencia al objeto que se mueve
protected:
	virtual void Mover(float DeltaTime);
	virtual void Destruirse();
	virtual void Disparar();
	virtual void CaidaLibre();
	class UMovimientoNaves* MovimientoNaves;
	FVector ObtenerUbicacionObjetoQueSemueve();
	
public:
	virtual void Tick(float DeltaTime) override;

};
