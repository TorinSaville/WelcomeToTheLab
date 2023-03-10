// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InteractionAssignCharacter.generated.h"

UCLASS(config=Game)
class AInteractionAssignCharacter : public ACharacter
{

	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* TP_CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* TP_FollowCamera;
	
	/** First person Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FP_FollowCamera;

public:

	AInteractionAssignCharacter();

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Input)
	float TurnRateGamepad;

public:

	// Replenish Health
	UFUNCTION(BlueprintCallable, Category = "Health")
	bool HealHealth(float _amount);

	// Reduce Health
	UFUNCTION(BlueprintCallable, Category = "Health")
	void DamageHealth(float _amount);

	// Add Block of Stamina
	UFUNCTION(BlueprintCallable, Category = "Stamina")
	bool AddStamina(float _amount);

	// Add to Score
	UFUNCTION(BlueprintCallable, Category = "Score")
	void AddScore();

protected:

	//Called Every Frame
	virtual void Tick(float DeltaTime) override;

	// Toggles View Between Third and First Person
	UFUNCTION(BlueprintCallable, Category = "Camera")
	void ToggleView();

	// If Stamina is Fully Depleted, Perform This
	UFUNCTION(BlueprintCallable, Category = "Stamina")
	void DepleteStamina();

	// Reset Stamina Regen
	UFUNCTION(BlueprintCallable, Category = "Stamina")
	void RegenStamina();

	// Interact With Item
	UFUNCTION(BlueprintCallable, Category = "Item")
	void Interact();

	// Tracks Current Game Time
	UFUNCTION(BlueprintCallable, Category = "Time")
	void GameTimer();

	// Adds a Second After Delay
	UFUNCTION(BlueprintCallable, Category = "Time")
	void CountSecond();

	// Starts Character Sprinting
	UFUNCTION(BlueprintCallable, Category = "Movement")
	void StartSprint();

	// Stops Character Sprinting
	UFUNCTION(BlueprintCallable, Category = "Movement")
	void StopSprint();

	/** Called for forwards/backward input */
	void MoveForward(float Value);

	/** Called for side to side input */
	void MoveRight(float Value);

	/** 
	 * Called via input to turn at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

	/** Handler for when a touch input begins. */
	void TouchStarted(ETouchIndex::Type FingerIndex, FVector Location);

	/** Handler for when a touch input stops. */
	void TouchStopped(ETouchIndex::Type FingerIndex, FVector Location);

protected:

	// CAMERA

		// Is Character in Third-Person
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
		bool cameraIsThirdPerson;

	// HEALTH

		// Character's Current Health
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
		float healthCurrent;

		// Character's Max Health
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
		float healthMax;

		// Bool to Determine if Character has Died
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
		bool healthIsDead;

	// STAMINA

		// Character's Current Stamina
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stamina")
		float staminaCurrent;

		// Character's Max Stamina
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stamina")
		float staminaMax;

		// Rate That the Character Recharges Stamina
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stamina")
		float staminaRechargeRate;

		// Rate That the Character Uses Stamina While Sprinting
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stamina")
		float staminaSprintUsage;

		// Delay Before Stamina Can Recharge
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stamina")
		float staminaDelayForRecharge;

		// Bool to Determine Whether Character's Stamina Can Recharge
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stamina")
		bool staminaCanRecharge;

		// Timer Handle for Recharging Stamina
		FTimerHandle staminaRechargeTHandle;

	// ITEM

		// Bool to Determine if Player is near Interactable Item
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
		bool itemIsNear;

	// SCORE

		// Int to Keep Track of Current Score
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Score")
		int scoreCurrent;

		// Int to Keep Track of Max Score
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Score")
		int scoreMax;

		// Bool to Determine if Game has Been Won
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Score")
		bool scoreIsComplete;

	// TIME

		// Int to Track Current Seconds
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Time")
		int timeSeconds;

		// Int to Track Current Minutes
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Time")
		int timeMinutes;

		// Int to Track Current Minutes
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Time")
		bool timeIsCounting;

		// Timer Handle for Tracking Game Time
		FTimerHandle timeTrackTimeTHandle;


	// MOVEMENT

		// Bool to Determine Whether Player is Sprinting
		UPROPERTY(EditAnywhere, BlueprintReadWrite, category = "Movement")
		bool movementIsSprinting;

	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// End of APawn interface

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return TP_CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return TP_FollowCamera; }
};

