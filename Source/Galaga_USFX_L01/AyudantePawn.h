// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Ayudante.h"
#include "AyudantePawn.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_L01_API AAyudantePawn : public AAyudante
{
	GENERATED_BODY()
	
public:
	AAyudantePawn();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

private:
	//Puntero a la interfas de las distintas estrategias
	class IIEstrategias* Estrategia;

public:
	void CambiarEstrategias(AActor* _Estrategias);
	void EjecutarEstrategias();

	
};
