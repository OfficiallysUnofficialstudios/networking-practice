// Fill out your copyright notice in the Description page of Project Settings.


#include "GunPongHitWall.h"
#include "Ball.h"

// Sets default values
AGunPongHitWall::AGunPongHitWall()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGunPongHitWall::BeginPlay()
{
	Super::BeginPlay();

	ResetHits();
	
}

// Called every frame
void AGunPongHitWall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AGunPongHitWall::ResetHits() {
	NumHits = 0;
}

void AGunPongHitWall::UpdateHits(AActor* CollidedActor) {

	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Blue, TEXT("amazing"));

	if (IsValid(CollidedActor)) {

		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Orange, TEXT("isvalid"));


		if (CollidedActor->IsA<ABall>()) {
			NumHits += 1;

			FString hitMessage = FString::Printf(TEXT("Hits: %i"), NumHits);
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, hitMessage);
		}
	}
	else {
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("CollidedActor is null!"));
	}
}

