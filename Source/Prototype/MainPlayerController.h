// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InputAction.h"
#include "InputActionValue.h"
#include "GameFramework/PlayerController.h"
#include "MainPlayerController.generated.h"

// Forward decaration
class UEnhancedInputComponent;
class APlayerCharacter;
class UInputMappingContext;

UCLASS()
class PROTOTYPE_API AMainPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	// The input action to mat to movement
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Player Input|Character Movement");
	TObjectPtr<UInputAction>ActionMove = nullptr;

	// The input action to map to looking around
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Player Input|Character Movement");
	TObjectPtr<UInputAction>ActionLook = nullptr;

	// The input action to map to looking around
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Player Input|Character Movement");
	TObjectPtr<UInputAction>ActionLookUp = nullptr;

	// The input action to map to jumping
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Player Input|Character Movement");
	TObjectPtr<UInputAction>ActionJump = nullptr;

	// The input action to map to crouch
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Player Input|Character Movement");
	TObjectPtr<UInputAction>ActionCrouch = nullptr;

	// the input action to map to sprint
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Player Input|Character Movement");
	TObjectPtr<UInputAction>ActionSprint = nullptr;

	// the input action to map to shoot
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Player Input|Character Movement");
	TObjectPtr<UInputAction>ActionShoot = nullptr;

	// the input mapping context to use
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Player Input|Character Movement");
	TObjectPtr<UInputMappingContext>UInputMappingContext = nullptr;

};
