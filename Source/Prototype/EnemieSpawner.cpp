// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemieSpawner.h"

// Sets default values
AEnemieSpawner::AEnemieSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEnemieSpawner::BeginPlay()
{
	Super::BeginPlay();
	GetWorldTimerManager().SetTimer(SpawnTimer, this,&AEnemieSpawner::Spawn, SpawnRate, true);
}

void AEnemieSpawner::Spawn()
{
	if(SpawnEnemies)
	{
		GetWorld()->SpawnActor<AActor>(Enemie,GetActorLocation(),GetActorRotation());
	}
}


// Called every frame
void AEnemieSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

