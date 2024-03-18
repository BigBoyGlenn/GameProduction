// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UW_ShopEntery.generated.h"

/**
 * 
 */
UCLASS()
class PROTOTYPE_API UUW_ShopEntery : public UUserWidget
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, meta = (BindWidget))
	class UTextBlock* ItemName;
	UPROPERTY(EditAnywhere, meta = (BindWidget))
	class UTextBlock* PriceTag;
	UPROPERTY(EditAnywhere, meta = (BindWidget))
	class UButton* BuyButton;
};
