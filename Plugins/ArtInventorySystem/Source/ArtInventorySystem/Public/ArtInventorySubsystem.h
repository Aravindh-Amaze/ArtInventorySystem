// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Data/ST_InventoryItemData.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ArtInventorySubsystem.generated.h"

/**
 * 
 */
UCLASS(BlueprintType, Blueprintable)
class ARTINVENTORYSYSTEM_API UArtInventorySubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintCallable,Category = "Inventory")
	void AddItemToInventory(FST_InventoryItemData ItemToAdd);
	

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Inventory")
	TArray<FST_InventoryItemData> InventoryItems;
	
private:
	
public:

	
};
