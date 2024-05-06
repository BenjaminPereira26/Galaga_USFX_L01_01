// Fill out your copyright notice in the Description page of Project Settings.


#include "MotorNodriza.h"

AMotorNodriza::AMotorNodriza()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MotorMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Torus.Shape_Torus'"));
	mallaMotor->SetStaticMesh(MotorMesh.Object);
}
