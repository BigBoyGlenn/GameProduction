// Fill out your copyright notice in the Description page of Project Settings.


#include "UW_CrystalCounter.h"
#include "Components/TextBlock.h"
#include "Components/Image.h"

void UUW_CrystalCounter::UpdateCrystalCount(int32 Count, int32 Max)
{
	if (CrystalBox)
	{
		//CrystalBox->ClearChildren();

	for (int i=0;i<Max;i++)
		{
			UImage* CrystalImage = WidgetTree->ConstructWidget<UImage>(UImage::StaticClass());

		if(Count<=i)
		{
			CrystalImage->SetBrushFromTexture(CollectedCrystalTexture);
		}
		else
		{
			CrystalImage->SetBrushFromTexture(UncollectedCrystalTexture);
		}
		FVector2D ImageSize(550.0f, 720.0f); // Adjust the size as needed
		CrystalImage->SetBrushSize(ImageSize);

		CrystalBox->AddChild(CrystalImage);
	}
	}
}

void UUW_CrystalCounter::UpdateSouls(int32 Count)
{
	SoulCount->SetText(FText::FromString(FString::FromInt(Count)));
}
