// Fill out your copyright notice in the Description page of Project Settings.


#include "ArquitectoObstaculos.h"

// Sets default values
AArquitectoObstaculos::AArquitectoObstaculos()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AArquitectoObstaculos::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AArquitectoObstaculos::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AArquitectoObstaculos::EstablecerConstructorObstaculos(AActor* _ConstructorObs)
{
	BO = Cast<IIBuilderObstaculos>(_ConstructorObs);
	if (!BO) //Error de registro si falla el lanzamiento
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, FString::Printf(TEXT("Error al castear")));
	}
}

void AArquitectoObstaculos::ConstruirObstaculos(int32 _ContObs)
{
	if (1 == _ContObs)
	{
		BO->BuildNivel1();
	}
	else if (2 == _ContObs)
	{
		BO->BuildNivel2();
	}
	else if (3 == _ContObs)
	{
		BO->BuildNivel3();
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, FString::Printf(TEXT("Error al seleccionar nivel")));
	}
}

AConcretoObstaculos* AArquitectoObstaculos::GetObstaculos()
{
	if (BO)
	{
		//Returns the Lodging of the Builder
		return BO->GetObstaculos();
	}
	//Log if the Builder is NULL
	UE_LOG(LogTemp, Error, TEXT("Return nullptr"));
	return nullptr;
}

