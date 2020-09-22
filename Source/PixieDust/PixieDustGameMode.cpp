// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "PixieDustGameMode.h"
#include "PixieDustCharacter.h"
#include "UObject/ConstructorHelpers.h"

APixieDustGameMode::APixieDustGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Worlds_Characters/Overworld/OverworldPixieCharacter/Pixie_BP"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
