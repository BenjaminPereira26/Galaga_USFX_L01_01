// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IBuilderNodriza.h"
#include "ConcretoBuilderNodriza.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AConcretoBuilderNodriza : public AActor, public IIBuilderNodriza
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AConcretoBuilderNodriza();
public:
	UPROPERTY(VisibleAnywhere, Category = "Nodriza")
	class AConcretoNodriza* Nodriza;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:
	void BuildMotorNodriza() override;
	void BuildArmaNodriza() override;
	void BuildChasisNodriza() override;
};
