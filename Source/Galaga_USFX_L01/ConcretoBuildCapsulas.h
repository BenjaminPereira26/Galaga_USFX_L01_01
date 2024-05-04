// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IBuildPacketeCapsulas.h"
#include "ConcretoBuildCapsulas.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AConcretoBuildCapsulas : public AActor, public IIBuildPacketeCapsulas
{
	GENERATED_BODY()
private:
	
public:	
	// Sets default values for this actor's properties
	AConcretoBuildCapsulas();
public:
	UPROPERTY(VisibleAnywhere, Category = "PaquetesEnergia")
	class APacketeCapsulasEnergia* PaqueteEnergia;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:
	void BuildPacketeEnergia1() override;
	void BuildPacketeEnergia2() override;
	void BuildPacketeEnergia3() override;

};
