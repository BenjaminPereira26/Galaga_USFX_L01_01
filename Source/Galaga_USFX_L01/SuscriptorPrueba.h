// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ISuscriptor.h"
#include "ITransformar.h"
#include "SuscriptorPrueba.generated.h"

UCLASS()
class GALAGA_USFX_L01_API ASuscriptorPrueba : public AActor, public IISuscriptor, public IITransformar
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASuscriptorPrueba();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	void EstablecerRecord(class ARecord* _RecordSub);
	void Actualizar(APublicadorObserver* _Publicador) override;
	void TransformarSubscriptor() override;
	void DestruirSubscripcion();

	FString Puntaje;

private:
	UPROPERTY(VisibleAnywhere, Category = "Subscriptor")
	class ARecord* Record;
};
