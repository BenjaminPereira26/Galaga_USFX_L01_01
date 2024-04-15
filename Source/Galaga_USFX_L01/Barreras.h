// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Barrera.h"
#include "Components/SceneComponent.h"
#include "Barreras.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GALAGA_USFX_L01_API UBarreras : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UBarreras();
	TSubclassOf<ABarrera> BarrierClass;


protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	virtual void Proteger();
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
