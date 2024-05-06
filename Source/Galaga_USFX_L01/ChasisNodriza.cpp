// Fill out your copyright notice in the Description page of Project Settings.


#include "ChasisNodriza.h"

AChasisNodriza::AChasisNodriza()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ChasisMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_QuadPyramid.Shape_QuadPyramid'"));
	mallaChasis->SetStaticMesh(ChasisMesh.Object);
}
