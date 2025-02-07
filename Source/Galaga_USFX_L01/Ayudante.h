// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Ayudante.generated.h"

UCLASS()
class GALAGA_USFX_L01_API AAyudante : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* mallaAyudante;

	
public:	
	// Sets default values for this actor's properties
	AAyudante();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	void Mover(float DeltaTime) PURE_VIRTUAL(AAyudante::Mover, );
};
