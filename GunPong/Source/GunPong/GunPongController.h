// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GunPongController.generated.h"

/**
 * 
 */
UCLASS()
class GUNPONG_API AGunPongController : public APlayerController
{
	GENERATED_BODY()
public:
	AGunPongController();

	/** Property replication */
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UPROPERTY(ReplicatedUsing = OnRep_ClickLocation)
	FVector ClickLocation;

	UFUNCTION()
		void OnRep_ClickLocation();

	FVector UpdateClickLocation();
};
