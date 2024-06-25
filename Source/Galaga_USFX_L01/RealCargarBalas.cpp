// Fill out your copyright notice in the Description page of Project Settings.


#include "RealCargarBalas.h"

// Sets default values
ARealCargarBalas::ARealCargarBalas()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Cargador = false;
	Final = false;
}

// Called when the game starts or when spawned
void ARealCargarBalas::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARealCargarBalas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ARealCargarBalas::TomarCajaMunicion()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, FString::Printf(TEXT("Tomar caja de 50 balas")));
}

void ARealCargarBalas::CheckEstadoMunicion()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Revisar balas en buen estado")));

}

void ARealCargarBalas::CantBalasBE()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("45 balas en buen estado")));

}

void ARealCargarBalas::FinalReloadBalas()
{
	TomarCajaMunicion();
	CheckEstadoMunicion();
	CantBalasBE();
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Cargando balas en buen estado en los cargadores")));
	Cargador = true;
}

void ARealCargarBalas::CargarCargador()
{
	if (!GetFinal()) {
		FinalReloadBalas();

		if (Cargador)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Cargador cargado")));
		}
	}
	else {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, FString::Printf(TEXT("Cargador lleno")));
	}
}

bool ARealCargarBalas::SetFinal(bool _final)
{
	return Final = _final;
}

bool ARealCargarBalas::GetFinal()
{
	return Final;
}

