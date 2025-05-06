// Fill out your copyright notice in the Description page of Project Settings.


#include "ArtInventorySubsystem.h"

void UArtInventorySubsystem::AddItemToInventory(FST_InventoryItemData ItemToAdd)
{
	InventoryItems.Add(ItemToAdd);
	UE_LOG(LogTemp, Warning, TEXT("Item added to inventory"));
}
