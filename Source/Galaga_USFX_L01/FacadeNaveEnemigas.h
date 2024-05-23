// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemigaKamikaze.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaEspia.h"
#include "NaveEnemigaNodriza.h"
#include "NaveEnemigaReabastecimiento.h"
#include "NaveEnemigaTransporte.h"
#include "FacadeNaveEnemigas.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AFacadeNaveEnemigas : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFacadeNaveEnemigas();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	TArray<ANaveEnemigaKamikaze*> FlotaNEKamikaze;
	TArray<ANaveEnemigaCaza*> FlotaNECaza;
	TArray<ANaveEnemigaEspia*> FlotaNEEspia;
	TArray<ANaveEnemigaNodriza*> FlotaNENodriza;
	TArray<ANaveEnemigaReabastecimiento*> FlotaNEReabastecimiento;
	TArray<ANaveEnemigaTransporte*> FlotaNETransporte;

public:
	virtual void setFlotaNEKamikaze();
	virtual void setFlotaNECaza();
	virtual void setFlotaNEEspia();
	virtual void setFlotaNENodriza();
	virtual void setFlotaNEReabastecimiento();
	virtual void setFlotaNETransporte();
};
