// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/HorizontalBox.h"
#include "Components/Image.h"
#include "Blueprint/WidgetTree.h"
#include "Blueprint/UserWidget.h"
#include "UW_CrystalCounter.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class PROTOTYPE_API UUW_CrystalCounter : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable)
	void UpdateCrystalCount(int32 Count, int32 Max);

	UFUNCTION(BlueprintCallable)
	void UpdateSouls(int32 Count);
	
	UPROPERTY(EditAnywhere, meta = (BindWidget))
	class UHorizontalBox* CrystalBox;
	UPROPERTY(EditAnywhere, meta = (BindWidget))
	class UTextBlock* SoulCount;
	UPROPERTY(EditAnywhere)
	UTexture2D* CollectedCrystalTexture;
	UPROPERTY(EditAnywhere)
	UTexture2D* UncollectedCrystalTexture;
};