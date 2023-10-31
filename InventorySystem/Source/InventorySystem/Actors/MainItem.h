﻿// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InventorySystem/Interfaces/InteractionInterface.h"
#include "MainItem.generated.h"

UCLASS()
class INVENTORYSYSTEM_API AMainItem : public AActor, public IInteractionInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMainItem();

	virtual void Interact() override;

protected:

	UPROPERTY(EditDefaultsOnly, Category= "Item Asset")
	class UStaticMeshComponent* ItemMesh;
	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;



};
