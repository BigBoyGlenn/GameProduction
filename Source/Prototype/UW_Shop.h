// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UW_Shop.generated.h"

/**
 * 
 */

UCLASS(Abstract)
class PROTOTYPE_API UUW_Shop : public UUserWidget
{
	GENERATED_BODY()
protected:
	virtual void Construct() override;

	UPROPERTY( meta = ( BindWidget ) )
	class UVerticalBox* EntriesVerticalBox;

	UPROPERTY( EditDefaultsOnly )
	TSubclassOf<class UUW_ShopEntery> EntryClass;
	
public:
	UPROPERTY(EditAnywhere, meta = (BindWidget))
	class UTextBlock* SoulCount;
	
	UFUNCTION(BlueprintCallable)
	void UpdateSouls(int32 Count);
};

