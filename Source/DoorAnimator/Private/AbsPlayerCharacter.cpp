// Fill out your copyright notice in the Description page of Project Settings.


#include "AbsPlayerCharacter.h"

// Sets default values
AAbsPlayerCharacter::AAbsPlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAbsPlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAbsPlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAbsPlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

const bool AAbsPlayerCharacter::isAlive() const {
	return true;

}
const float AAbsPlayerCharacter::getCurrentHealth() const {
	return 100.0;
}

