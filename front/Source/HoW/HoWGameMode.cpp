// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "HoWGameMode.h"
#include "HoWPlayerController.h"
#include "HoWCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHoWGameMode::AHoWGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AHoWPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}