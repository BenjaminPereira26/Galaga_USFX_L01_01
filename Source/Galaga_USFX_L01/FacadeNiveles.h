
// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FacadeNiveles.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AFacadeNiveles : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFacadeNiveles();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
class AFacadeNaveEnemigas* FacadeNE;
int Nivel;
public:
	void setNENivel1();
	void setNENivel2();
	void setNENivel3();
	void setNivel(int32 _Nivel);
};
