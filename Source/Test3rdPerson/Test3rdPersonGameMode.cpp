// Copyright Epic Games, Inc. All Rights Reserved.

#include "Test3rdPersonGameMode.h"
#include "Test3rdPersonCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATest3rdPersonGameMode::ATest3rdPersonGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
