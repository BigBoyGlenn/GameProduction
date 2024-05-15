// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"
#include "Projectile.h"
#include "PlayerCharacter.generated.h"

//#include "NiagaraFunctionLibrary.h"

class UCameraComponent;

UCLASS()
class PROTOTYPE_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerCharacter();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Shoot function
	UFUNCTION(BlueprintCallable, Category = "Player|Action")
	void Shoot();

	// Zoom function
	UFUNCTION(BlueprintCallable, Category = "Player|Action")
	void ZoomIn();

	UFUNCTION(BlueprintCallable, Category = "Player|Action")
	void ZoomOut();

	UFUNCTION(BlueprintCallable, Category = "Player|Action")
	void SprintStart();

	UFUNCTION(BlueprintCallable, Category = "Player|Action")
	void SprintEnd();


	// Spring arm
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USpringArmComponent* SpringArmComp;

	// Camera
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCameraComponent* CameraComp;

	// Staff mesh
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* StaffMeshComp;

	// Hat mesh
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* HatMeshComp;

	// Gun muzzle offset from the camera location.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	FVector MuzzleOffset;

	// Health and Mana
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Health)
	int Health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Mana)
	int Mana;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Attack)
	bool IsAttacking;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	float WalkSpeed = 600.f;
	float SprintSpeed = 900.f;

	// Projectile class to spawn.
	UPROPERTY(EditAnywhere, Category = Projectile)
	TSubclassOf<class AProjectile> ProjectileClass;
	

};
