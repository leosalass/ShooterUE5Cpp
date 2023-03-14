// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"

// Sets default values
APlayerCharacter::APlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

	/**
	 * probando comentarios en console
	 */
	FString cadena = "Log temporal de prueba usando un tipo warning";
	int entero = 5;
	float flotante = 7.3;

	//cadena es un object, hay que usar el puntero, se coloca un *cadena
	UE_LOG(LogTemp, Warning, TEXT("%s %d %f"), *cadena, entero, flotante);

	/**
	 * Probando comentarios en el editor
	 */
	constexpr int Key = -1;
	if(GEngine)
	{
		constexpr float Duration = 3.5;
		GEngine->AddOnScreenDebugMessage(Key, Duration, FColor::Cyan, TEXT("mensaje de prueba"));
	}
}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

