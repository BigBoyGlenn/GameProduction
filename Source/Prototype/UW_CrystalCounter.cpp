// Fill out your copyright notice in the Description page of Project Settings.


#include "UW_CrystalCounter.h"
#include "Components/TextBlock.h"

void UUW_CrystalCounter::UpdateCrystalCount(int32 Count, int32 Max)
{
	if (CrystalCount)
	{
		FString thing = FString::FromInt(Count)+"/"+FString::FromInt(Max);
		CrystalCount->SetText(FText::FromString(thing));
	}
}
