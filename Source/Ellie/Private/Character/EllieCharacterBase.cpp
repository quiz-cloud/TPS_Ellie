// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/EllieCharacterBase.h"

// Sets default values
AEllieCharacterBase::AEllieCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEllieCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEllieCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AEllieCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

