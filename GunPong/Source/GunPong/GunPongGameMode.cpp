// Copyright Epic Games, Inc. All Rights Reserved.

#include "GunPongGameMode.h"
#include "GunPongCharacter.h"
#include "GunPongController.h"

AGunPongGameMode::AGunPongGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AGunPongCharacter::StaticClass();
	PlayerControllerClass = AGunPongController::StaticClass();
}

