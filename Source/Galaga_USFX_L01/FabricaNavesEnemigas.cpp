// Fill out your copyright notice in the Description page of Project Settings.


#include "FabricaNavesEnemigas.h"
#include "NaveEnemiga.h"

// Sets default values
AFabricaNavesEnemigas::AFabricaNavesEnemigas()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFabricaNavesEnemigas::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFabricaNavesEnemigas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

ANaveEnemiga* AFabricaNavesEnemigas::OrderNave(FString Category)
{
	ANaveEnemiga* NaveEnemiga = ConcoctNave(Category);
	return NaveEnemiga;
}
