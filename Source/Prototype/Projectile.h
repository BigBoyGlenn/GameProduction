// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Projectile.generated.h"

UCLASS()
class PROTOTYPE_API AProjectile : public AActor
{
	GENERATED_BODY()

	// Sphere collision component 
	UPROPERTY(VisibleDefaultsOnly, Category = Projectile)
	USphereComponent* CollisionComp;

	// Projectile movement component 
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = "true"))
	UProjectileMovementComponent* ProjectileMovement;
	
public:	
	// Sets default values for this actor's properties
	AProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

    // Sphere collision component
    UPROPERTY(VisibleDefaultsOnly, Category = Projectile)
    USphereComponent* CollisionComponent;

    // Projectile movement component
    UPROPERTY(VisibleAnywhere, Category = Movement)
    UProjectileMovementComponent* ProjectileMovementComponent;

    // Function that initializes the projectile's velocity in the shoot direction.
    void FireInDirection(const FVector& ShootDirection);

    // Projectile mesh
    UPROPERTY(VisibleDefaultsOnly, Category = Projectile)
    UStaticMeshComponent* ProjectileMeshComponent;

    // Projectile material
    UPROPERTY(VisibleDefaultsOnly, Category = Movement)
    UMaterialInstanceDynamic* ProjectileMaterialInstance;

    // Function that is called when the projectile hits something.
    UFUNCTION()
    void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);

};
