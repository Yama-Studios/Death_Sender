// Copyright Epic Games, Inc. All Rights Reserved.

#include "DeathSenderGameMode.h"
#include "DeathSenderCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADeathSenderGameMode::ADeathSenderGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
