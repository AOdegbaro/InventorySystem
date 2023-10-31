#pragma once

#include "CoreMinimal.h"
#include "ItemDataStruct.generated.h"

USTRUCT(BlueprintType)
struct FItem
{
	
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TSubclassOf<class AMainItem> ItemClass;
    
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	class UTexture2D* ItemImage;
   
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	float ItemCost;
	
	
};

