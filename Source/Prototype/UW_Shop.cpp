// Fill out your copyright notice in the Description page of Project Settings.


#include "UW_Shop.h"
#include "Components/TextBlock.h"

void UUW_Shop::Construct()
{
	Super::Construct();

	// Imagine we have an inventory class that provides us with the following:
	TArray<UUW_ShopEntery*> Shop;

	for ( UUW_ShopEntery* Item : Shop )
	{
		// Instantiate the widget
		UUW_ShopEntery* Entry = CreateWidget<UUW_ShopEntery>( this, EntryClass );

		// Set up its contents
		Entry->InitializeFromInventoryItem( Item );

		// Add it to the list
		EntriesVerticalBox->AddChildToVerticalBox( Entry );
	}
}

void UUW_Shop::UpdateSouls(int32 Count)
{
	SoulCount->SetText(FText::FromString(FString::FromInt(Count)));
}
