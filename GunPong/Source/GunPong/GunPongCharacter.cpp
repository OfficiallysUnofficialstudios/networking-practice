// Fill out your copyright notice in the Description page of Project Settings.

#include "GunPongCharacter.h"
#include "GunPongProjectile.h"
#include "GunPongController.h"
#include "TimerManager.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/Controller.h"
#include "Engine/CollisionProfile.h"
#include "Engine/StaticMesh.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Sound/SoundBase.h"
#include "Net/UnrealNetwork.h"
#include "Engine/Engine.h"

const FName AGunPongCharacter::MoveForwardBinding("MoveForward");
const FName AGunPongCharacter::MoveRightBinding("MoveRight");

// Sets default values
AGunPongCharacter::AGunPongCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	bReplicates = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("/Game/TwinStick/Meshes/TwinStickUFO.TwinStickUFO"));

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

// Called every frame
void AGunPongCharacter::Tick(float DeltaSeconds)
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
		/*
		const FRotator NewRotation = Movement.Rotation();
		FHitResult Hit(1.f);
		RootComponent->MoveComponent(Movement, NewRotation, true, &Hit);

		if (Hit.IsValidBlockingHit())
		{
			const FVector Normal2D = Hit.Normal.GetSafeNormal2D();
			const FVector Deflection = FVector::VectorPlaneProject(Movement, Normal2D) * (1.f - Hit.Time);
			RootComponent->MoveComponent(Deflection, NewRotation, true);
		}*/
		AddMovementInput(Movement);
	}
}

void AGunPongCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent);

	// set up gameplay key bindings
	PlayerInputComponent->BindAxis(MoveForwardBinding);
	PlayerInputComponent->BindAxis(MoveRightBinding);
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AGunPongCharacter::StartFire);
}


//////////////////////////////////////////////////////////////////////////
// Replicated Properties

void AGunPongCharacter::GetLifetimeReplicatedProps(TArray <FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	//Replicate current health.
	//DOREPLIFETIME(AThirdPersonMPCharacter, CurrentHealth);
}

void AGunPongCharacter::StartFire()
{
	if (!bIsFiringWeapon)
	{
		bIsFiringWeapon = true;
		UWorld* World = GetWorld();
		World->GetTimerManager().SetTimer(FiringTimer, this, &AGunPongCharacter::StopFire, FireRate, false);

		AGunPongController* PlayerController = (AGunPongController*)Controller;
		FVector ClickLocation = PlayerController->UpdateClickLocation();

		FRotator ClickDirection = FRotator(0, (float)atan2(ClickLocation.X, ClickLocation.Y) / PI * 180, 0);

		SpawnProjectile(ClickDirection);
	}
}

void AGunPongCharacter::StopFire()
{
	bIsFiringWeapon = false;
}

void AGunPongCharacter::SpawnProjectile_Implementation(FRotator ClickDirection)
{
	OnSpawnProjectile();
	FVector spawnLocation = GetActorLocation() + (ClickDirection.Vector() * 100.0f);
	FRotator spawnRotation = ClickDirection;

	//FString positionsMessage = FString::Printf(TEXT("%f, %f, %f"), ClickDirection.Pitch, ClickDirection.Yaw, ClickDirection.Roll);
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, positionsMessage);

	FActorSpawnParameters spawnParameters;
	spawnParameters.Instigator = GetInstigator();
	spawnParameters.Owner = this;

	AGunPongProjectile* spawnedProjectile = GetWorld()->SpawnActor<AGunPongProjectile>(spawnLocation, spawnRotation, spawnParameters);
}
