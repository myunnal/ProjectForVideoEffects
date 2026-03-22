// Fill out your copyright notice in the Description page of Project Settings.


#include "Cubs.h"

// Sets default values
ACubs::ACubs()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACubs::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ACubs::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector currentScale = GetActorScale3D();
	FVector newScale = currentScale * 1.01f * GetWorld()->GetDeltaSeconds();
	SetActorScale3D(newScale);


}

