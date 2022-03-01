// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ChronoShooterCharacter.generated.h"

UCLASS()
class CHRONOSHOOTER_API AChronoShooterCharacter : public ACharacter
{
	GENERATED_BODY()

public:

	//Make a health property
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Base Character")
		float Health = 100;

	//Make a counter property
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Base Character")
		float Count = 0;

	//Make an IsDead property
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Base Character")
		bool IsDead = false;

	//Calculate death function (helper)
	virtual void CalculateDead();

	//Calculate health function
	UFUNCTION(BlueprintCallable, Category = "Base Character")
		virtual void CalculateHealth(float delta);

	UFUNCTION(BlueprintCallable, Category = "Base Character")
		virtual void CountDead();

#if WITH_EDITOR
	//Editor-centric code for changing properties
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertChangedEvent)
		override;
#endif

public:
	// Sets default values for this character's properties
	AChronoShooterCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
