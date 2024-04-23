// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemy.h"
#include "GameFramework/Actor.h"
#include "EnemieSpawner.generated.h"

UCLASS()
class PROTOTYPE_API AEnemieSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemieSpawner();
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	TArray<AActor*> Waypoints;
	
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	TSubclassOf<AEnemy> Enemie;

	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	bool SpawnEnemies = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	float SpawnRate = 3.f;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	void Spawn();
	
	FTimerHandle SpawnTimer;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
