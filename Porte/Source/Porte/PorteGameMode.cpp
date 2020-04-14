// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "PorteGameMode.h"
#include "PorteHUD.h"
#include "PorteCharacter.h"
#include "UObject/ConstructorHelpers.h"

APorteGameMode::APorteGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = APorteHUD::StaticClass();
}
