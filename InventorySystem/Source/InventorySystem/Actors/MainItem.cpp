// Fill out your copyright notice in the Description page of Project Settings.


#include "MainItem.h"
#include "InventorySystem/InventorySystemCharacter.h"


// Sets default values
AMainItem::AMainItem()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	ItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	RootComponent = ItemMesh;
}

void AMainItem::Interact(class AInventorySystemCharacter* PlayerCharacter)
{
	if(PlayerCharacter)
	{
		PlayerCharacter->AddItemToInventoryWidget(ItemData);
	}
	Destroy();
}

// Called when the game starts or when spawned
void AMainItem::BeginPlay()
{
	Super::BeginPlay();
	
}




