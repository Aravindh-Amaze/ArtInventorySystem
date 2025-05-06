// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ST_ItemDataBase.h"
#include "PDA_ItemBase.generated.h"

/**
 * 
 */
UCLASS()
class ARTINVENTORYSYSTEM_API UPDA_ItemBase : public UPrimaryDataAsset
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Inventory")
	FST_ItemDataBase ItemData;
};
