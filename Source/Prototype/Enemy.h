// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Enemy.generated.h"

UCLASS()
class PROTOTYPE_API AEnemy : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemy();

	// Health, crystal, speed
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Enemy)
	int Health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Enemy)
	bool HasCrystal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Enemy)
	float Speed;

	// Enemy mesh
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USkeletalMeshComponent* EnemyMesh;

	// Crystal mesh
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* StolenCrystal;

	// On overlap with another actor
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
