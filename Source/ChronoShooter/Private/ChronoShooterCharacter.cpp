// Fill out your copyright notice in the Description page of Project Settings.


#include "ChronoShooterCharacter.h"

// Sets default values
AChronoShooterCharacter::AChronoShooterCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AChronoShooterCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AChronoShooterCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AChronoShooterCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

//Implement CalculateHealth
void AChronoShooterCharacter::CalculateHealth(float Delta)
{
	Health += Delta;
	CalculateDead();
}

//Implement CalculateDead
void AChronoShooterCharacter::CalculateDead()
{
	if (Health <= 0)
		IsDead = true;
	else
		IsDead = false;
}

//Implement CountDead
void AChronoShooterCharacter::CountDead()
{
	Count = Count + 1;
}


//Implement PostEditChangeProperty
#if WITH_EDITOR
void AChronoShooterCharacter::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	IsDead = false;
	Health = 100;

	Super::PostEditChangeProperty(PropertyChangedEvent);

	CalculateDead();
}
#endif

