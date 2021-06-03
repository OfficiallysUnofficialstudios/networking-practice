// Fill out your copyright notice in the Description page of Project Settings.


#include "GunPongController.h"
#include "Net/UnrealNetwork.h"
#include "Engine/Engine.h"

AGunPongController::AGunPongController()
{
	// Show cursor stuff
	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableMouseOverEvents = true;
}

FVector AGunPongController::UpdateClickLocation()
{
	float MouseX;
	float MouseY;

	bool gotMousePosition = GetMousePosition(MouseX, MouseY);

	FVector2D ScreenLocation;
	ProjectWorldLocationToScreen(GetPawn()->GetActorLocation(), ScreenLocation, true);

	ClickLocation = FVector(MouseX - ScreenLocation.X, ScreenLocation.Y - MouseY, 0);
	return ClickLocation;
}

void AGunPongController::OnRep_ClickLocation()
{
}

// Replicated Properties

void AGunPongController::GetLifetimeReplicatedProps(TArray <FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	//Replicate current health.
	DOREPLIFETIME(AGunPongController, ClickLocation);
}