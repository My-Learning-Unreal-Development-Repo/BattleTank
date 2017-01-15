// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "TankPlayerController.h"




ATank* ATankPlayerController::GetControlledTank() const
{
	
	return Cast<ATank>(GetPawn());


	

	
}

 void ATankPlayerController::BeginPlay()
{
	 Super::BeginPlay(); 
	 UE_LOG(LogTemp, Warning, TEXT("PlayerController Begin PLay")); 

	 ATank* thisTank = GetControlledTank(); 
	 FString tankName = thisTank->GetName(); 
	 if (!thisTank) {
		 UE_LOG(LogTemp, Warning, TEXT("PlayerController not possessing a tank"));
	 }
	 else{

		 UE_LOG(LogTemp, Warning, TEXT("|%s| is possessed tank"), *tankName);

	 }
}
