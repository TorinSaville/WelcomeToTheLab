// Copyright Epic Games, Inc. All Rights Reserved.

#include "InteractionAssignCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"

//////////////////////////////////////////////////////////////////////////
// AInteractionAssignCharacter

AInteractionAssignCharacter::AInteractionAssignCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// set our turn rate for input
	TurnRateGamepad = 50.f;

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f); // ...at this rotation rate

	// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
	// instead of recompiling to adjust them
	GetCharacterMovement()->JumpZVelocity = 700.f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	TP_CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("TP_CameraBoom"));
	TP_CameraBoom->SetupAttachment(RootComponent);
	TP_CameraBoom->TargetArmLength = 400.0f; // The camera follows at this distance behind the character	
	TP_CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	TP_FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("TP_FollowCamera"));
	TP_FollowCamera->SetupAttachment(TP_CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	TP_FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm
	TP_FollowCamera->SetActive(true);
	
	// Create First-Person Camera
	FP_FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FP_FollowCamera"));
	FP_FollowCamera->SetupAttachment(GetMesh(), "head");
	FP_FollowCamera->bUsePawnControlRotation = true;
	FP_FollowCamera->SetActive(false);

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named ThirdPersonCharacter (to avoid direct content references in C++)

	cameraIsThirdPerson = true;

	healthCurrent = 1.0f;
	healthMax = 1.0f;
	healthIsDead = false;

	staminaCurrent = 1.0f;
	staminaMax = 1.0f;
	staminaSprintUsage = 0.1f;
	staminaRechargeRate = 0.05f;
	staminaDelayForRecharge = 3.0f;
	staminaCanRecharge = true;

	itemIsNear = false;

	scoreCurrent = 0;
	scoreMax = 1;
	scoreIsComplete = false;

	timeSeconds = 0;
	timeMinutes = 0;
	timeIsCounting = false;

	movementIsSprinting = false;

}

//////////////////////////////////////////////////////////////////////////
// Input

void AInteractionAssignCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{

	// Set up gameplay key bindings
	check(PlayerInputComponent);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAxis("Move Forward / Backward", this, &AInteractionAssignCharacter::MoveForward);
	PlayerInputComponent->BindAxis("Move Right / Left", this, &AInteractionAssignCharacter::MoveRight);

	PlayerInputComponent->BindAction("Interact", IE_Pressed, this, &AInteractionAssignCharacter::Interact);

	PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &AInteractionAssignCharacter::StartSprint);
	PlayerInputComponent->BindAction("Sprint", IE_Released, this, &AInteractionAssignCharacter::StopSprint);

	PlayerInputComponent->BindAction("Toggle View", IE_Pressed, this, &AInteractionAssignCharacter::ToggleView);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn Right / Left Mouse", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("Turn Right / Left Gamepad", this, &AInteractionAssignCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("Look Up / Down Mouse", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("Look Up / Down Gamepad", this, &AInteractionAssignCharacter::LookUpAtRate);

	// handle touch devices
	PlayerInputComponent->BindTouch(IE_Pressed, this, &AInteractionAssignCharacter::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &AInteractionAssignCharacter::TouchStopped);
}

void AInteractionAssignCharacter::TouchStarted(ETouchIndex::Type FingerIndex, FVector Location)
{
	Jump();
}

void AInteractionAssignCharacter::TouchStopped(ETouchIndex::Type FingerIndex, FVector Location)
{
	StopJumping();
}

void AInteractionAssignCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * TurnRateGamepad * GetWorld()->GetDeltaSeconds());
}

void AInteractionAssignCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * TurnRateGamepad * GetWorld()->GetDeltaSeconds());
}

void AInteractionAssignCharacter::MoveForward(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void AInteractionAssignCharacter::MoveRight(float Value)
{
	if ( (Controller != nullptr) && (Value != 0.0f) )
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
	
		// get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Value);
	}
}

bool AInteractionAssignCharacter::HealHealth(float _amount)
{

	if (healthCurrent < healthMax) {

		healthCurrent += _amount;

		if (healthCurrent > healthMax) {

			healthCurrent = healthMax;

		}

		return true;

	}
	else {

		return false;

	}

}

void AInteractionAssignCharacter::DamageHealth(float _amount)
{

	healthCurrent -= _amount;

	if (healthCurrent <= 0.00f) {

		healthCurrent = 0.00f;
		healthIsDead = true;
		UE_LOG(LogTemp, Warning, TEXT("Player Is Dead"));

	}

}

bool AInteractionAssignCharacter::AddStamina(float _amount)
{

	if (staminaCurrent < staminaMax) {

		staminaCurrent += _amount;

		if (staminaCurrent > staminaMax) {

			staminaCurrent = staminaMax;

		}

		return true;

	}
	else {

		return false;

	}

}

void AInteractionAssignCharacter::AddScore()
{

	scoreCurrent++;

	if (scoreCurrent == scoreMax) {

		UE_LOG(LogTemp, Warning, TEXT("Score Condition Met"));
		scoreIsComplete = true;
		UE_LOG(LogTemp, Warning, TEXT("Is Complete True"));

	}

}


void AInteractionAssignCharacter::ToggleView()
{

	if (cameraIsThirdPerson) {

		TP_FollowCamera->SetActive(false);
		FP_FollowCamera->SetActive(true);
		bUseControllerRotationYaw = true;
		cameraIsThirdPerson = false;

	}
	else {

		TP_FollowCamera->SetActive(true);
		FP_FollowCamera->SetActive(false);
		bUseControllerRotationYaw = false;
		cameraIsThirdPerson = true;

	}

}

void AInteractionAssignCharacter::DepleteStamina()
{

	StopSprint();

}

void AInteractionAssignCharacter::RegenStamina()
{

	staminaCanRecharge = true;

}

void AInteractionAssignCharacter::Interact()
{

	if (itemIsNear) {

		UE_LOG(LogTemp, Warning, TEXT("Interated With Item"));

	}

}

void AInteractionAssignCharacter::GameTimer()
{

	GetWorld()->GetTimerManager().SetTimer(timeTrackTimeTHandle, this, &AInteractionAssignCharacter::CountSecond, 1.0f, false);

}

void AInteractionAssignCharacter::CountSecond()
{

	timeSeconds++;

	if (timeSeconds > 59) {

		timeMinutes++;
		timeSeconds = 0;

	}

	timeIsCounting = false;

}

void AInteractionAssignCharacter::StartSprint()
{

	// If Character has Stamina to Use, Allow Sprint
	if (staminaCurrent > 0.0f) {

		GetCharacterMovement()->MaxWalkSpeed = 1500.0f;
		movementIsSprinting = true;

		// Stop Stamina Charger for a Time
		staminaCanRecharge = false;
		GetWorld()->GetTimerManager().ClearTimer(staminaRechargeTHandle);
		UE_LOG(LogTemp, Warning, TEXT("Is Sprinting"));

	}

}

void AInteractionAssignCharacter::StopSprint()
{

	// If Character has Stopped Due to Lack of Stamina, Don't Trigger Twice
	if (movementIsSprinting) {

		GetCharacterMovement()->MaxWalkSpeed = 500.0f;
		movementIsSprinting = false;

		// Start the Timer to Start Recharging Stamina
		GetWorld()->GetTimerManager().SetTimer(staminaRechargeTHandle, this,
			&AInteractionAssignCharacter::RegenStamina, staminaDelayForRecharge, false);
		UE_LOG(LogTemp, Warning, TEXT("Stopped Sprinting"));

	}

}

void AInteractionAssignCharacter::Tick(float DeltaTime)
{

	if (!timeIsCounting) {

		timeIsCounting = true;
		GameTimer();

	}

	if (movementIsSprinting) {

		staminaCurrent = FMath::FInterpConstantTo(staminaCurrent, 0.0f, DeltaTime, staminaSprintUsage);

		if (staminaCurrent <= 0.0f) {

			DepleteStamina();

		}

	}
	else {

		if (staminaCurrent < staminaMax) {

			if (staminaCanRecharge) {

				staminaCurrent = FMath::FInterpConstantTo(staminaCurrent, staminaMax, DeltaTime, staminaRechargeRate);

			}

		}

	}

}

