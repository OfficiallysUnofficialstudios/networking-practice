// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GunPongPawn.generated.h"

UCLASS(Blueprintable)
class AGunPongPawn : public APawn
{
	GENERATED_BODY()

	/* The mesh component */
	UPROPERTY(Category = Mesh, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* ShipMeshComponent;

	/** The camera */
	UPROPERTY(Category = Camera, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* CameraComponent;

private:
	FRotator MouseDirection;
	float MoveForward;
	float MoveRight;

public:
	AGunPongPawn();

	/** Property replication */
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	/* The speed our ship moves around the level */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
	float MoveSpeed;

	/** Sound to play each time we fire */
	UPROPERTY(Category = Audio, EditAnywhere, BlueprintReadWrite)
	class USoundBase* FireSound;

	// Begin Actor Interface
	virtual void Tick(float DeltaSeconds) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
	// End Actor Interface

	UPROPERTY(EditDefaultsOnly, Category = "Gameplay|Projectile")
		TSubclassOf<class AGunPongProjectile> ProjectileClass;

	/** Delay between shots in seconds. Used to control fire rate for our test projectile, but also to prevent an overflow of server functions from binding SpawnProjectile directly to input.*/
	UPROPERTY(EditDefaultsOnly, Category = "Gameplay")
		float FireRate;

	/** If true, we are in the process of firing projectiles. */
	bool bIsFiringWeapon;

	/** Function for beginning weapon fire.*/
	UFUNCTION(BlueprintCallable, Category = "Gameplay")
		void StartFire();

	/** Function for ending weapon fire. Once this is called, the player can use StartFire again.*/
	UFUNCTION(BlueprintCallable, Category = "Gameplay")
		void StopFire();

	/** Server function for spawning projectiles.*/
	UFUNCTION(Server, Reliable)
		void SpawnProjectile();

	/** A timer handle used for providing the fire rate delay in-between spawns.*/
	FTimerHandle FiringTimer;

	// Static names for axis bindings
	static const FName MoveForwardBinding;
	static const FName MoveRightBinding;

public:
	/** Returns ShipMeshComponent subobject **/
	FORCEINLINE class UStaticMeshComponent* GetShipMeshComponent() const { return ShipMeshComponent; }
	/** Returns CameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetCameraComponent() const { return CameraComponent; }
};

