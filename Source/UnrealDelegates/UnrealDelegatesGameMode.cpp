// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealDelegatesGameMode.h"
#include "UnrealDelegatesCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnrealDelegatesGameMode::AUnrealDelegatesGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
