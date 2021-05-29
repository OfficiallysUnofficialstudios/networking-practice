// Copyright Epic Games, Inc. All Rights Reserved.

#include "GunPongGameMode.h"
#include "GunPongPawn.h"

AGunPongGameMode::AGunPongGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AGunPongPawn::StaticClass();
}

