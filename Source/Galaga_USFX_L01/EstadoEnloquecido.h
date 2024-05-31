// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EstadoEnloquecido.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AEstadoEnloquecido : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEstadoEnloquecido();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
