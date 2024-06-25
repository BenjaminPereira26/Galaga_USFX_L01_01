// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ICargarBalas.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RealCargarBalas.generated.h"

UCLASS()
class GALAGA_USFX_L01_API ARealCargarBalas : public AActor, public IICargarBalas
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARealCargarBalas();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	void TomarCajaMunicion() override;
	void CheckEstadoMunicion() override;
	void CantBalasBE() override;
	void FinalReloadBalas() override;
	void CargarCargador() override;

	bool SetFinal(bool _final);
	bool GetFinal();

private:
	bool Cargador;
	bool Final;
};
