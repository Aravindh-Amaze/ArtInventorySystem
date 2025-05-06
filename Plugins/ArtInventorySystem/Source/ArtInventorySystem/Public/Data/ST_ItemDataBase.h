// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/Texture2D.h"
#include "ST_ItemDataBase.generated.h"

USTRUCT(BlueprintType)

struct ARTINVENTORYSYSTEM_API FST_ItemDataBase
{
public:

	GENERATED_BODY()

	FST_ItemDataBase();
	~FST_ItemDataBase();

/* Variable Declarations*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category = "Inventory")
	FText Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category = "Inventory")
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category = "Inventory")
	TSoftObjectPtr<UTexture2D> Icon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category = "Inventory")
	int Cost;
};
	