// Fill out your copyright notice in the Description page of Project Settings.


#include "DirectorNodriza.h"

// Sets default values
ADirectorNodriza::ADirectorNodriza()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADirectorNodriza::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADirectorNodriza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADirectorNodriza::EstablecerConstructorNodriza(AActor* _ConstructorN)
{
	BN = Cast<IIBuilderNodriza>(_ConstructorN);
	if (!BN) //Error de registro si falla el lanzamiento
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, FString::Printf(TEXT("Error al castear")));
	}
}

void ADirectorNodriza::ConstruirNodriza()
{
	BN->BuildMotorNodriza();
	BN->BuildChasisNodriza();
	BN->BuildArmaNodriza();
	
}

