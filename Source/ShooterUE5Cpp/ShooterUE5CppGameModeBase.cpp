// Copyright Epic Games, Inc. All Rights Reserved.


#include "ShooterUE5CppGameModeBase.h"

#include "PlayerCharacter.h"

AShooterUE5CppGameModeBase::AShooterUE5CppGameModeBase()
{
	DefaultPawnClass = APlayerCharacter::StaticClass();
}
