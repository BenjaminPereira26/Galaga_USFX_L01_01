// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Motor.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AMotor : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Repuesto, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* mallaMotor;
public:	
	// Sets default values for this actor's properties
	AMotor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
