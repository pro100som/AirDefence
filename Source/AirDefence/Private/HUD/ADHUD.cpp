// Fill out your copyright notice in the Description page of Project Settings.

#include "HUD/ADHUD.h"

DEFINE_LOG_CATEGORY_STATIC(LogADHUD, All, All)

void AADHUD::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogADHUD, Display, TEXT("AADHUD::BeginPlay"));
}
