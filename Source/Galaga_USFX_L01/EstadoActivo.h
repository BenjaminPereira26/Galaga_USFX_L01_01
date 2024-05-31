// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IEstadoNE.h"
#include "EstadoActivo.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AEstadoActivo : public AActor, public IIEstadoNE
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEstadoActivo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY()
	class ANaveEnemigaKamikaze* NEKamikaze;

public:
	void setNE(class ANaveEnemigaKamikaze* _NEKamikaze) override;
	void Mover(float DeltaTime) override;
	void Disparar() override;
};
