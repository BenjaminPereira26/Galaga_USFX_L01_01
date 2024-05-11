// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IBuilderObstaculos.h"
#include "ConcretoBuilderObstaculos.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AConcretoBuilderObstaculos : public AActor, public IIBuilderObstaculos
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AConcretoBuilderObstaculos();
public:
	UPROPERTY(VisibleAnywhere, Category = "Obstaculos")
	class AConcretoObstaculos* Obstaculo;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:
	virtual void BuildNivel1() override;
	virtual void BuildNivel2() override;
	virtual void BuildNivel3() override;
	virtual class AConcretoObstaculos* GetObstaculos() override;
};
