// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Data/PDA_ItemBase.h"
#include "ST_InventoryItemData.generated.h"

USTRUCT(BlueprintType)

struct ARTINVENTORYSYSTEM_API FST_InventoryItemData
{
public:

	GENERATED_BODY()
	FST_InventoryItemData();
	~FST_InventoryItemData();

public:
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Inventory")
	UPDA_ItemBase* ItemData;
	
};
	