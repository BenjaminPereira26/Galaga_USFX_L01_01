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
protected:
	FTimerHandle TimerHandle_ShotTimerExpired;
	uint32 bCanFire : 1;
	float FireRate;
	
public:
	ANaveEnemigaKamikaze();
	FORCEINLINE int GetTiempoSuicidio() const { return tiempoSuicidio; }
	FORCEINLINE void SetTiempoSuicidio(int _tiempoSuicidio) { tiempoSuicidio = _tiempoSuicidio; }
	
protected:
	virtual void Mover(float DeltaTime);
	virtual void Destruirse();
	virtual void Disparar();
	virtual void CaidaLibre();
	class UMovimientoNaves* MovimientoNaves;
	
public:
	virtual void Tick(float DeltaTime) override;
	virtual void ShotTimerExpired();
};
