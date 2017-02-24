// Fill out your copyright notice in the Description page of Project Settings.

#include "BuildingEscape.h"
#include "OpenDoor.h"


// Sets default values for this component's properties
UOpenDoor::UOpenDoor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UOpenDoor::BeginPlay()
{
	Super::BeginPlay();

	// Find creator actor
	AActor* Owner = GetOwner();

	// Create a rotator.
	// Parameters.
	// 1st Pitch:
	// 2nd Yaw:
	// 3rd Roll:
	FRotator NewRotation = FRotator(0.0f, -30.0f,0.0f);
	// Find Z rotation 
	Owner->SetActorRotation(NewRotation);
	
}


// Called every frame
void UOpenDoor::TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction )
{
	Super::TickComponent( DeltaTime, TickType, ThisTickFunction );

	// ...
}

