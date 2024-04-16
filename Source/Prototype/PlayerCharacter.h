// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"
#include "Projectile.h"
#include "PlayerCharacter.generated.h"


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

	UFUNCTION(BlueprintCallable, Category = "Player|Shoot")
	void Shoot();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USpringArmComponent* SpringArmComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCameraComponent* CameraComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* StaticMeshComp;

	// Gun muzzle offset from the camera location.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	FVector MuzzleOffset;

	// Health and Mana
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Health)
	int Health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Mana)
	int Mana;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Projectile class to spawn.
	UPROPERTY(EditAnywhere, Category = Projectile)
	TSubclassOf<class AProjectile> ProjectileClass;
	

};
