// Copyright Epic Games, Inc. All Rights Reserved.


#include "ShooterUE5CppGameModeBase.h"

#include "PlayerCharacter.h"

AShooterUE5CppGameModeBase::AShooterUE5CppGameModeBase()
{
	/**
	* Agregamos el player character a la scena, asignandolo a DefaultPawnClass
	* verificable en el editor de UE:
	* World Settings -> Selected Game Mode -> Default Pawn Class
	*/
	DefaultPawnClass = APlayerCharacter::StaticClass();
}
