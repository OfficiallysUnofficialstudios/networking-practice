// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GunPongHitWall.generated.h"

UCLASS()
class GUNPONG_API AGunPongHitWall : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGunPongHitWall();

	UPROPERTY(BlueprintReadWrite)
	// Number of hits
	int NumHits;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	// Resets hits (and maybe other things later)
	void ResetHits();

	UFUNCTION(BlueprintCallable)
	// Increases the hits when ball hits wall
	void UpdateHits(AActor* CollidedActor);

};
