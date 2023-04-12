// Copyright Epic Games, Inc. All Rights Reserved.

#include "SilverdaleGameMode.h"
#include "SilverdaleCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASilverdaleGameMode::ASilverdaleGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
