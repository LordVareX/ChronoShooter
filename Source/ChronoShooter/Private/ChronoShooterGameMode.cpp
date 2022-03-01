// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "ChronoShooterGameMode.h"
#include "ChronoShooterPawn.h"

AChronoShooterGameMode::AChronoShooterGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AChronoShooterPawn::StaticClass();
}

