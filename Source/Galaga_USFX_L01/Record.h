// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PublicadorObserver.h"
#include "Record.generated.h"

UCLASS()
class GALAGA_USFX_L01_API ARecord : public APublicadorObserver
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	ARecord();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	FString Puntaje;

public:
	void CambioPuntaje();
	void SetPuntaje(FString _Puntos);
	FORCEINLINE FString GetPuntaje();
};
