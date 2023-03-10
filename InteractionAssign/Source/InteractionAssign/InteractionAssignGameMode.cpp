// Copyright Epic Games, Inc. All Rights Reserved.

#include "InteractionAssignGameMode.h"
#include "InteractionAssignCharacter.h"
#include "UObject/ConstructorHelpers.h"

AInteractionAssignGameMode::AInteractionAssignGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
