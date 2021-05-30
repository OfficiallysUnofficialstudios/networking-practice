// Copyright Epic Games, Inc. All Rights Reserved.

#include "GunPongPawn.h"
#include "GunPongProjectile.h"
#include "TimerManager.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Controller.h"
#include "Engine/CollisionProfile.h"
#include "Engine/StaticMesh.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Sound/SoundBase.h"
#include "Net/UnrealNetwork.h"
#include "Engine/Engine.h"

const FName AGunPongPawn::MoveForwardBinding("MoveForward");
const FName AGunPongPawn::MoveRightBinding("MoveRight");

AGunPongPawn::AGunPongPawn()
{	
	bReplicates = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("/Game/TwinStick/Meshes/TwinStickUFO.TwinStickUFO"));
	// Create the mesh component
	ShipMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	RootComponent = ShipMeshComponent;
	ShipMeshComponent->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
	ShipMeshComponent->SetStaticMesh(ShipMesh.Object);
	
	// Cache our sound effect
	static ConstructorHelpers::FObjectFinder<USoundBase> FireAudio(TEXT("/Game/TwinStick/Audio/TwinStickFire.TwinStickFire"));
	FireSound = FireAudio.Object;

	// Create a camera...
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("TopDownCamera"));
	CameraComponent->AddRelativeLocation(FVector(0, 0, 3000));
	CameraComponent->AddRelativeRotation(FRotator(-90, 0, 0));

	// Movement
	MoveSpeed = 600.0f;

	// Initialize projectile class
	ProjectileClass = AGunPongProjectile::StaticClass();
	// Weapon
	FireRate = 1.0f;
	bIsFiringWeapon = false;

	// Initialize Mouse Direction
	MouseDirection = FRotator(0, 0, 0);
}

void AGunPongPawn::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent);

	// set up gameplay key bindings
	PlayerInputComponent->BindAxis(MoveForwardBinding);
	PlayerInputComponent->BindAxis(MoveRightBinding);
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AGunPongPawn::StartFire);
}

void AGunPongPawn::Tick(float DeltaSeconds)
{
	// Find movement direction
	const float ForwardValue = GetInputAxisValue(MoveForwardBinding);
	const float RightValue = GetInputAxisValue(MoveRightBinding);

	// Clamp max size so that (X=1, Y=1) doesn't cause faster movement in diagonal directions
	const FVector MoveDirection = FVector(ForwardValue, RightValue, 0.f).GetClampedToMaxSize(1.0f);

	// Calculate  movement
	const FVector Movement = MoveDirection * MoveSpeed * DeltaSeconds;

	// If non-zero size, move this actor
	if (Movement.SizeSquared() > 0.0f)
	{
		const FRotator NewRotation = Movement.Rotation();
		FHitResult Hit(1.f);
		RootComponent->MoveComponent(Movement, NewRotation, true, &Hit);

		if (Hit.IsValidBlockingHit())
		{
			const FVector Normal2D = Hit.Normal.GetSafeNormal2D();
			const FVector Deflection = FVector::VectorPlaneProject(Movement, Normal2D) * (1.f - Hit.Time);
			RootComponent->MoveComponent(Deflection, NewRotation, true);
		}
	}
}

//////////////////////////////////////////////////////////////////////////
// Replicated Properties

void AGunPongPawn::GetLifetimeReplicatedProps(TArray <FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	//Replicate current health.
	//DOREPLIFETIME(AThirdPersonMPCharacter, CurrentHealth);
}

void AGunPongPawn::StartFire()
{
	if (!bIsFiringWeapon)
	{
		bIsFiringWeapon = true;
		UWorld* World = GetWorld();
		World->GetTimerManager().SetTimer(FiringTimer, this, &AGunPongPawn::StopFire, FireRate, false);
		SpawnProjectile();
	}
}

void AGunPongPawn::StopFire()
{
	bIsFiringWeapon = false;
}

void AGunPongPawn::SpawnProjectile_Implementation()
{
	APlayerController* MyController = GetNetOwningPlayer()->PlayerController;
	float MouseX = 0;
	float MouseY = 0;
	bool gotMousePosition = MyController->GetMousePosition(MouseX, MouseY);
	if (gotMousePosition) {
		FVector2D ScreenLocation;
		MyController->ProjectWorldLocationToScreen(GetActorLocation(), ScreenLocation, true);
		MouseDirection = FRotator(0, 180.0f * atan2(MouseX - ScreenLocation.X, ScreenLocation.Y - MouseY) / PI, 0);
	}

	FVector spawnLocation = GetActorLocation() + (MouseDirection.Vector() * 100.0f);
	FRotator spawnRotation = MouseDirection;

	//FString positionsMessage = FString::Printf(TEXT("%f"), MouseDirection.Yaw);
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, positionsMessage);

	FActorSpawnParameters spawnParameters;
	spawnParameters.Instigator = GetInstigator();
	spawnParameters.Owner = this;

	AGunPongProjectile* spawnedProjectile = GetWorld()->SpawnActor<AGunPongProjectile>(spawnLocation, spawnRotation, spawnParameters);
}
