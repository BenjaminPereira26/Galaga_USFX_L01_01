// Fill out your copyright notice in the Description page of Project Settings.


#include "PublicadorObserver.h"
#include "ISuscriptor.h"

// Sets default values
APublicadorObserver::APublicadorObserver()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Subscriptores = TArray<AActor*>();
}

// Called when the game starts or when spawned
void APublicadorObserver::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APublicadorObserver::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APublicadorObserver::Subscribirse(AActor* _Subscriptor)
{
	Subscriptores.Add(_Subscriptor);
}

void APublicadorObserver::DeSubscribirse(AActor* _Subscriptor)
{
	Subscriptores.Remove(_Subscriptor);
}

void APublicadorObserver::NotificadorSubscriptores()
{
	for (AActor* Subs : Subscriptores) {
		ISuscriptor = Cast<IISuscriptor>(Subs);
		if (ISuscriptor) {
			ISuscriptor->Actualizar(this);
		}
	}
}

