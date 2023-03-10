// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractionAssign/InteractionAssignCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionAssignCharacter() {}
// Cross Module References
	INTERACTIONASSIGN_API UClass* Z_Construct_UClass_AInteractionAssignCharacter_NoRegister();
	INTERACTIONASSIGN_API UClass* Z_Construct_UClass_AInteractionAssignCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_InteractionAssign();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AInteractionAssignCharacter::execStopSprint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopSprint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInteractionAssignCharacter::execStartSprint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartSprint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInteractionAssignCharacter::execCountSecond)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CountSecond();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInteractionAssignCharacter::execGameTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GameTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInteractionAssignCharacter::execInteract)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Interact();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInteractionAssignCharacter::execRegenStamina)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegenStamina();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInteractionAssignCharacter::execDepleteStamina)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DepleteStamina();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInteractionAssignCharacter::execToggleView)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleView();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInteractionAssignCharacter::execAddScore)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddScore();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInteractionAssignCharacter::execAddStamina)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param__amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddStamina(Z_Param__amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInteractionAssignCharacter::execDamageHealth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param__amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DamageHealth(Z_Param__amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInteractionAssignCharacter::execHealHealth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param__amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HealHealth(Z_Param__amount);
		P_NATIVE_END;
	}
	void AInteractionAssignCharacter::StaticRegisterNativesAInteractionAssignCharacter()
	{
		UClass* Class = AInteractionAssignCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddScore", &AInteractionAssignCharacter::execAddScore },
			{ "AddStamina", &AInteractionAssignCharacter::execAddStamina },
			{ "CountSecond", &AInteractionAssignCharacter::execCountSecond },
			{ "DamageHealth", &AInteractionAssignCharacter::execDamageHealth },
			{ "DepleteStamina", &AInteractionAssignCharacter::execDepleteStamina },
			{ "GameTimer", &AInteractionAssignCharacter::execGameTimer },
			{ "HealHealth", &AInteractionAssignCharacter::execHealHealth },
			{ "Interact", &AInteractionAssignCharacter::execInteract },
			{ "RegenStamina", &AInteractionAssignCharacter::execRegenStamina },
			{ "StartSprint", &AInteractionAssignCharacter::execStartSprint },
			{ "StopSprint", &AInteractionAssignCharacter::execStopSprint },
			{ "ToggleView", &AInteractionAssignCharacter::execToggleView },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AInteractionAssignCharacter_AddScore_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractionAssignCharacter_AddScore_Statics::Function_MetaDataParams[] = {
		{ "Category", "Score" },
		{ "Comment", "// Add to Score\n" },
		{ "ModuleRelativePath", "InteractionAssignCharacter.h" },
		{ "ToolTip", "Add to Score" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractionAssignCharacter_AddScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractionAssignCharacter, nullptr, "AddScore", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractionAssignCharacter_AddScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractionAssignCharacter_AddScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractionAssignCharacter_AddScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractionAssignCharacter_AddScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractionAssignCharacter_AddStamina_Statics
	{
		struct InteractionAssignCharacter_eventAddStamina_Parms
		{
			float _amount;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp__amount;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AInteractionAssignCharacter_AddStamina_Statics::NewProp__amount = { "_amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionAssignCharacter_eventAddStamina_Parms, _amount), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AInteractionAssignCharacter_AddStamina_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InteractionAssignCharacter_eventAddStamina_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AInteractionAssignCharacter_AddStamina_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InteractionAssignCharacter_eventAddStamina_Parms), &Z_Construct_UFunction_AInteractionAssignCharacter_AddStamina_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractionAssignCharacter_AddStamina_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractionAssignCharacter_AddStamina_Statics::NewProp__amount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractionAssignCharacter_AddStamina_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractionAssignCharacter_AddStamina_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stamina" },
		{ "Comment", "// Add Block of Stamina\n" },
		{ "ModuleRelativePath", "InteractionAssignCharacter.h" },
		{ "ToolTip", "Add Block of Stamina" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractionAssignCharacter_AddStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractionAssignCharacter, nullptr, "AddStamina", nullptr, nullptr, sizeof(Z_Construct_UFunction_AInteractionAssignCharacter_AddStamina_Statics::InteractionAssignCharacter_eventAddStamina_Parms), Z_Construct_UFunction_AInteractionAssignCharacter_AddStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractionAssignCharacter_AddStamina_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractionAssignCharacter_AddStamina_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractionAssignCharacter_AddStamina_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractionAssignCharacter_AddStamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractionAssignCharacter_AddStamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractionAssignCharacter_CountSecond_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractionAssignCharacter_CountSecond_Statics::Function_MetaDataParams[] = {
		{ "Category", "Time" },
		{ "Comment", "// Adds a Second After Delay\n" },
		{ "ModuleRelativePath", "InteractionAssignCharacter.h" },
		{ "ToolTip", "Adds a Second After Delay" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractionAssignCharacter_CountSecond_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractionAssignCharacter, nullptr, "CountSecond", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractionAssignCharacter_CountSecond_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractionAssignCharacter_CountSecond_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractionAssignCharacter_CountSecond()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractionAssignCharacter_CountSecond_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractionAssignCharacter_DamageHealth_Statics
	{
		struct InteractionAssignCharacter_eventDamageHealth_Parms
		{
			float _amount;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp__amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AInteractionAssignCharacter_DamageHealth_Statics::NewProp__amount = { "_amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionAssignCharacter_eventDamageHealth_Parms, _amount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractionAssignCharacter_DamageHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractionAssignCharacter_DamageHealth_Statics::NewProp__amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractionAssignCharacter_DamageHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "Comment", "// Reduce Health\n" },
		{ "ModuleRelativePath", "InteractionAssignCharacter.h" },
		{ "ToolTip", "Reduce Health" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractionAssignCharacter_DamageHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractionAssignCharacter, nullptr, "DamageHealth", nullptr, nullptr, sizeof(Z_Construct_UFunction_AInteractionAssignCharacter_DamageHealth_Statics::InteractionAssignCharacter_eventDamageHealth_Parms), Z_Construct_UFunction_AInteractionAssignCharacter_DamageHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractionAssignCharacter_DamageHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractionAssignCharacter_DamageHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractionAssignCharacter_DamageHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractionAssignCharacter_DamageHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractionAssignCharacter_DamageHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractionAssignCharacter_DepleteStamina_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractionAssignCharacter_DepleteStamina_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stamina" },
		{ "Comment", "// If Stamina is Fully Depleted, Perform This\n" },
		{ "ModuleRelativePath", "InteractionAssignCharacter.h" },
		{ "ToolTip", "If Stamina is Fully Depleted, Perform This" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractionAssignCharacter_DepleteStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractionAssignCharacter, nullptr, "DepleteStamina", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractionAssignCharacter_DepleteStamina_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractionAssignCharacter_DepleteStamina_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractionAssignCharacter_DepleteStamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractionAssignCharacter_DepleteStamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractionAssignCharacter_GameTimer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractionAssignCharacter_GameTimer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Time" },
		{ "Comment", "// Tracks Current Game Time\n" },
		{ "ModuleRelativePath", "InteractionAssignCharacter.h" },
		{ "ToolTip", "Tracks Current Game Time" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractionAssignCharacter_GameTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractionAssignCharacter, nullptr, "GameTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractionAssignCharacter_GameTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractionAssignCharacter_GameTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractionAssignCharacter_GameTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractionAssignCharacter_GameTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractionAssignCharacter_HealHealth_Statics
	{
		struct InteractionAssignCharacter_eventHealHealth_Parms
		{
			float _amount;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp__amount;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AInteractionAssignCharacter_HealHealth_Statics::NewProp__amount = { "_amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionAssignCharacter_eventHealHealth_Parms, _amount), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AInteractionAssignCharacter_HealHealth_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InteractionAssignCharacter_eventHealHealth_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AInteractionAssignCharacter_HealHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InteractionAssignCharacter_eventHealHealth_Parms), &Z_Construct_UFunction_AInteractionAssignCharacter_HealHealth_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractionAssignCharacter_HealHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractionAssignCharacter_HealHealth_Statics::NewProp__amount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractionAssignCharacter_HealHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractionAssignCharacter_HealHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "Comment", "// Replenish Health\n" },
		{ "ModuleRelativePath", "InteractionAssignCharacter.h" },
		{ "ToolTip", "Replenish Health" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractionAssignCharacter_HealHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractionAssignCharacter, nullptr, "HealHealth", nullptr, nullptr, sizeof(Z_Construct_UFunction_AInteractionAssignCharacter_HealHealth_Statics::InteractionAssignCharacter_eventHealHealth_Parms), Z_Construct_UFunction_AInteractionAssignCharacter_HealHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractionAssignCharacter_HealHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractionAssignCharacter_HealHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractionAssignCharacter_HealHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractionAssignCharacter_HealHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractionAssignCharacter_HealHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractionAssignCharacter_Interact_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractionAssignCharacter_Interact_Statics::Function_MetaDataParams[] = {
		{ "Category", "Item" },
		{ "Comment", "// Interact With Item\n" },
		{ "ModuleRelativePath", "InteractionAssignCharacter.h" },
		{ "ToolTip", "Interact With Item" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractionAssignCharacter_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractionAssignCharacter, nullptr, "Interact", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractionAssignCharacter_Interact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractionAssignCharacter_Interact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractionAssignCharacter_Interact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractionAssignCharacter_Interact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractionAssignCharacter_RegenStamina_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractionAssignCharacter_RegenStamina_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stamina" },
		{ "Comment", "// Reset Stamina Regen\n" },
		{ "ModuleRelativePath", "InteractionAssignCharacter.h" },
		{ "ToolTip", "Reset Stamina Regen" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractionAssignCharacter_RegenStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractionAssignCharacter, nullptr, "RegenStamina", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractionAssignCharacter_RegenStamina_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractionAssignCharacter_RegenStamina_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractionAssignCharacter_RegenStamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractionAssignCharacter_RegenStamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractionAssignCharacter_StartSprint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractionAssignCharacter_StartSprint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "// Starts Character Sprinting\n" },
		{ "ModuleRelativePath", "InteractionAssignCharacter.h" },
		{ "ToolTip", "Starts Character Sprinting" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractionAssignCharacter_StartSprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractionAssignCharacter, nullptr, "StartSprint", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractionAssignCharacter_StartSprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractionAssignCharacter_StartSprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractionAssignCharacter_StartSprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractionAssignCharacter_StartSprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractionAssignCharacter_StopSprint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractionAssignCharacter_StopSprint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "// Stops Character Sprinting\n" },
		{ "ModuleRelativePath", "InteractionAssignCharacter.h" },
		{ "ToolTip", "Stops Character Sprinting" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractionAssignCharacter_StopSprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractionAssignCharacter, nullptr, "StopSprint", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractionAssignCharacter_StopSprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractionAssignCharacter_StopSprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractionAssignCharacter_StopSprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractionAssignCharacter_StopSprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractionAssignCharacter_ToggleView_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractionAssignCharacter_ToggleView_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "// Toggles View Between Third and First Person\n" },
		{ "ModuleRelativePath", "InteractionAssignCharacter.h" },
		{ "ToolTip", "Toggles View Between Third and First Person" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractionAssignCharacter_ToggleView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractionAssignCharacter, nullptr, "ToggleView", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractionAssignCharacter_ToggleView_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractionAssignCharacter_ToggleView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractionAssignCharacter_ToggleView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractionAssignCharacter_ToggleView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInteractionAssignCharacter);
	UClass* Z_Construct_UClass_AInteractionAssignCharacter_NoRegister()
	{
		return AInteractionAssignCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AInteractionAssignCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TP_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TP_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TP_FollowCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TP_FollowCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FP_FollowCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FP_FollowCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnRateGamepad_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnRateGamepad;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cameraIsThirdPerson_MetaData[];
#endif
		static void NewProp_cameraIsThirdPerson_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_cameraIsThirdPerson;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_healthCurrent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_healthCurrent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_healthMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_healthMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_healthIsDead_MetaData[];
#endif
		static void NewProp_healthIsDead_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_healthIsDead;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_staminaCurrent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_staminaCurrent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_staminaMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_staminaMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_staminaRechargeRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_staminaRechargeRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_staminaSprintUsage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_staminaSprintUsage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_staminaDelayForRecharge_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_staminaDelayForRecharge;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_staminaCanRecharge_MetaData[];
#endif
		static void NewProp_staminaCanRecharge_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_staminaCanRecharge;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_itemIsNear_MetaData[];
#endif
		static void NewProp_itemIsNear_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_itemIsNear;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_scoreCurrent_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_scoreCurrent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_scoreMax_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_scoreMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_scoreIsComplete_MetaData[];
#endif
		static void NewProp_scoreIsComplete_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_scoreIsComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_timeSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_timeSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_timeMinutes_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_timeMinutes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_timeIsCounting_MetaData[];
#endif
		static void NewProp_timeIsCounting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_timeIsCounting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_movementIsSprinting_MetaData[];
#endif
		static void NewProp_movementIsSprinting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_movementIsSprinting;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInteractionAssignCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractionAssign,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AInteractionAssignCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AInteractionAssignCharacter_AddScore, "AddScore" }, // 2263199395
		{ &Z_Construct_UFunction_AInteractionAssignCharacter_AddStamina, "AddStamina" }, // 1511230832
		{ &Z_Construct_UFunction_AInteractionAssignCharacter_CountSecond, "CountSecond" }, // 2170023369
		{ &Z_Construct_UFunction_AInteractionAssignCharacter_DamageHealth, "DamageHealth" }, // 4130298880
		{ &Z_Construct_UFunction_AInteractionAssignCharacter_DepleteStamina, "DepleteStamina" }, // 1670889709
		{ &Z_Construct_UFunction_AInteractionAssignCharacter_GameTimer, "GameTimer" }, // 2576230992
		{ &Z_Construct_UFunction_AInteractionAssignCharacter_HealHealth, "HealHealth" }, // 230957899
		{ &Z_Construct_UFunction_AInteractionAssignCharacter_Interact, "Interact" }, // 1475974301
		{ &Z_Construct_UFunction_AInteractionAssignCharacter_RegenStamina, "RegenStamina" }, // 3416776677
		{ &Z_Construct_UFunction_AInteractionAssignCharacter_StartSprint, "StartSprint" }, // 3529617482
		{ &Z_Construct_UFunction_AInteractionAssignCharacter_StopSprint, "StopSprint" }, // 3865732692
		{ &Z_Construct_UFunction_AInteractionAssignCharacter_ToggleView, "ToggleView" }, // 150597367
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractionAssignCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "InteractionAssignCharacter.h" },
		{ "ModuleRelativePath", "InteractionAssignCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_TP_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InteractionAssignCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_TP_CameraBoom = { "TP_CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractionAssignCharacter, TP_CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_TP_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_TP_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_TP_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InteractionAssignCharacter.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_TP_FollowCamera = { "TP_FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractionAssignCharacter, TP_FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_TP_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_TP_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_FP_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** First person Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InteractionAssignCharacter.h" },
		{ "ToolTip", "First person Follow camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_FP_FollowCamera = { "FP_FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractionAssignCharacter, FP_FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_FP_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_FP_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_TurnRateGamepad_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "InteractionAssignCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_TurnRateGamepad = { "TurnRateGamepad", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractionAssignCharacter, TurnRateGamepad), METADATA_PARAMS(Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_TurnRateGamepad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_TurnRateGamepad_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_cameraIsThirdPerson_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "// Is Character in Third-Person\n" },
		{ "ModuleRelativePath", "InteractionAssignCharacter.h" },
		{ "ToolTip", "Is Character in Third-Person" },
	};
#endif
	void Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_cameraIsThirdPerson_SetBit(void* Obj)
	{
		((AInteractionAssignCharacter*)Obj)->cameraIsThirdPerson = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_cameraIsThirdPerson = { "cameraIsThirdPerson", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AInteractionAssignCharacter), &Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_cameraIsThirdPerson_SetBit, METADATA_PARAMS(Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_cameraIsThirdPerson_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_cameraIsThirdPerson_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_healthCurrent_MetaData[] = {
		{ "Category", "Health" },
		{ "Comment", "// Character's Current Health\n" },
		{ "ModuleRelativePath", "InteractionAssignCharacter.h" },
		{ "ToolTip", "Character's Current Health" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_healthCurrent = { "healthCurrent", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractionAssignCharacter, healthCurrent), METADATA_PARAMS(Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_healthCurrent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_healthCurrent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_healthMax_MetaData[] = {
		{ "Category", "Health" },
		{ "Comment", "// Character's Max Health\n" },
		{ "ModuleRelativePath", "InteractionAssignCharacter.h" },
		{ "ToolTip", "Character's Max Health" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_healthMax = { "healthMax", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractionAssignCharacter, healthMax), METADATA_PARAMS(Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_healthMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_healthMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_healthIsDead_MetaData[] = {
		{ "Category", "Health" },
		{ "Comment", "// Bool to Determine if Character has Died\n" },
		{ "ModuleRelativePath", "InteractionAssignCharacter.h" },
		{ "ToolTip", "Bool to Determine if Character has Died" },
	};
#endif
	void Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_healthIsDead_SetBit(void* Obj)
	{
		((AInteractionAssignCharacter*)Obj)->healthIsDead = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_healthIsDead = { "healthIsDead", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AInteractionAssignCharacter), &Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_healthIsDead_SetBit, METADATA_PARAMS(Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_healthIsDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_healthIsDead_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_staminaCurrent_MetaData[] = {
		{ "Category", "Stamina" },
		{ "Comment", "// Character's Current Stamina\n" },
		{ "ModuleRelativePath", "InteractionAssignCharacter.h" },
		{ "ToolTip", "Character's Current Stamina" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_staminaCurrent = { "staminaCurrent", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractionAssignCharacter, staminaCurrent), METADATA_PARAMS(Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_staminaCurrent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_staminaCurrent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_staminaMax_MetaData[] = {
		{ "Category", "Stamina" },
		{ "Comment", "// Character's Max Stamina\n" },
		{ "ModuleRelativePath", "InteractionAssignCharacter.h" },
		{ "ToolTip", "Character's Max Stamina" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_staminaMax = { "staminaMax", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractionAssignCharacter, staminaMax), METADATA_PARAMS(Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_staminaMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_staminaMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_staminaRechargeRate_MetaData[] = {
		{ "Category", "Stamina" },
		{ "Comment", "// Rate That the Character Recharges Stamina\n" },
		{ "ModuleRelativePath", "InteractionAssignCharacter.h" },
		{ "ToolTip", "Rate That the Character Recharges Stamina" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_staminaRechargeRate = { "staminaRechargeRate", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractionAssignCharacter, staminaRechargeRate), METADATA_PARAMS(Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_staminaRechargeRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_staminaRechargeRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_staminaSprintUsage_MetaData[] = {
		{ "Category", "Stamina" },
		{ "Comment", "// Rate That the Character Uses Stamina While Sprinting\n" },
		{ "ModuleRelativePath", "InteractionAssignCharacter.h" },
		{ "ToolTip", "Rate That the Character Uses Stamina While Sprinting" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_staminaSprintUsage = { "staminaSprintUsage", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractionAssignCharacter, staminaSprintUsage), METADATA_PARAMS(Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_staminaSprintUsage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_staminaSprintUsage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_staminaDelayForRecharge_MetaData[] = {
		{ "Category", "Stamina" },
		{ "Comment", "// Delay Before Stamina Can Recharge\n" },
		{ "ModuleRelativePath", "InteractionAssignCharacter.h" },
		{ "ToolTip", "Delay Before Stamina Can Recharge" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_staminaDelayForRecharge = { "staminaDelayForRecharge", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractionAssignCharacter, staminaDelayForRecharge), METADATA_PARAMS(Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_staminaDelayForRecharge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_staminaDelayForRecharge_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_staminaCanRecharge_MetaData[] = {
		{ "Category", "Stamina" },
		{ "Comment", "// Bool to Determine Whether Character's Stamina Can Recharge\n" },
		{ "ModuleRelativePath", "InteractionAssignCharacter.h" },
		{ "ToolTip", "Bool to Determine Whether Character's Stamina Can Recharge" },
	};
#endif
	void Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_staminaCanRecharge_SetBit(void* Obj)
	{
		((AInteractionAssignCharacter*)Obj)->staminaCanRecharge = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_staminaCanRecharge = { "staminaCanRecharge", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AInteractionAssignCharacter), &Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_staminaCanRecharge_SetBit, METADATA_PARAMS(Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_staminaCanRecharge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_staminaCanRecharge_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_itemIsNear_MetaData[] = {
		{ "Category", "Item" },
		{ "Comment", "// Bool to Determine if Player is near Interactable Item\n" },
		{ "ModuleRelativePath", "InteractionAssignCharacter.h" },
		{ "ToolTip", "Bool to Determine if Player is near Interactable Item" },
	};
#endif
	void Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_itemIsNear_SetBit(void* Obj)
	{
		((AInteractionAssignCharacter*)Obj)->itemIsNear = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_itemIsNear = { "itemIsNear", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AInteractionAssignCharacter), &Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_itemIsNear_SetBit, METADATA_PARAMS(Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_itemIsNear_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_itemIsNear_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_scoreCurrent_MetaData[] = {
		{ "Category", "Score" },
		{ "Comment", "// Int to Keep Track of Current Score\n" },
		{ "ModuleRelativePath", "InteractionAssignCharacter.h" },
		{ "ToolTip", "Int to Keep Track of Current Score" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_scoreCurrent = { "scoreCurrent", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractionAssignCharacter, scoreCurrent), METADATA_PARAMS(Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_scoreCurrent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_scoreCurrent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_scoreMax_MetaData[] = {
		{ "Category", "Score" },
		{ "Comment", "// Int to Keep Track of Max Score\n" },
		{ "ModuleRelativePath", "InteractionAssignCharacter.h" },
		{ "ToolTip", "Int to Keep Track of Max Score" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_scoreMax = { "scoreMax", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractionAssignCharacter, scoreMax), METADATA_PARAMS(Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_scoreMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_scoreMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_scoreIsComplete_MetaData[] = {
		{ "Category", "Score" },
		{ "Comment", "// Bool to Determine if Game has Been Won\n" },
		{ "ModuleRelativePath", "InteractionAssignCharacter.h" },
		{ "ToolTip", "Bool to Determine if Game has Been Won" },
	};
#endif
	void Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_scoreIsComplete_SetBit(void* Obj)
	{
		((AInteractionAssignCharacter*)Obj)->scoreIsComplete = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_scoreIsComplete = { "scoreIsComplete", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AInteractionAssignCharacter), &Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_scoreIsComplete_SetBit, METADATA_PARAMS(Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_scoreIsComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_scoreIsComplete_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_timeSeconds_MetaData[] = {
		{ "Category", "Time" },
		{ "Comment", "// Int to Track Current Seconds\n" },
		{ "ModuleRelativePath", "InteractionAssignCharacter.h" },
		{ "ToolTip", "Int to Track Current Seconds" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_timeSeconds = { "timeSeconds", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractionAssignCharacter, timeSeconds), METADATA_PARAMS(Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_timeSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_timeSeconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_timeMinutes_MetaData[] = {
		{ "Category", "Time" },
		{ "Comment", "// Int to Track Current Minutes\n" },
		{ "ModuleRelativePath", "InteractionAssignCharacter.h" },
		{ "ToolTip", "Int to Track Current Minutes" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_timeMinutes = { "timeMinutes", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractionAssignCharacter, timeMinutes), METADATA_PARAMS(Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_timeMinutes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_timeMinutes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_timeIsCounting_MetaData[] = {
		{ "Category", "Time" },
		{ "Comment", "// Int to Track Current Minutes\n" },
		{ "ModuleRelativePath", "InteractionAssignCharacter.h" },
		{ "ToolTip", "Int to Track Current Minutes" },
	};
#endif
	void Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_timeIsCounting_SetBit(void* Obj)
	{
		((AInteractionAssignCharacter*)Obj)->timeIsCounting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_timeIsCounting = { "timeIsCounting", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AInteractionAssignCharacter), &Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_timeIsCounting_SetBit, METADATA_PARAMS(Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_timeIsCounting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_timeIsCounting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_movementIsSprinting_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "// Bool to Determine Whether Player is Sprinting\n" },
		{ "ModuleRelativePath", "InteractionAssignCharacter.h" },
		{ "ToolTip", "Bool to Determine Whether Player is Sprinting" },
	};
#endif
	void Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_movementIsSprinting_SetBit(void* Obj)
	{
		((AInteractionAssignCharacter*)Obj)->movementIsSprinting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_movementIsSprinting = { "movementIsSprinting", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AInteractionAssignCharacter), &Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_movementIsSprinting_SetBit, METADATA_PARAMS(Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_movementIsSprinting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_movementIsSprinting_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInteractionAssignCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_TP_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_TP_FollowCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_FP_FollowCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_TurnRateGamepad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_cameraIsThirdPerson,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_healthCurrent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_healthMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_healthIsDead,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_staminaCurrent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_staminaMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_staminaRechargeRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_staminaSprintUsage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_staminaDelayForRecharge,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_staminaCanRecharge,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_itemIsNear,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_scoreCurrent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_scoreMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_scoreIsComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_timeSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_timeMinutes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_timeIsCounting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractionAssignCharacter_Statics::NewProp_movementIsSprinting,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInteractionAssignCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractionAssignCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AInteractionAssignCharacter_Statics::ClassParams = {
		&AInteractionAssignCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AInteractionAssignCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionAssignCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AInteractionAssignCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionAssignCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInteractionAssignCharacter()
	{
		if (!Z_Registration_Info_UClass_AInteractionAssignCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInteractionAssignCharacter.OuterSingleton, Z_Construct_UClass_AInteractionAssignCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AInteractionAssignCharacter.OuterSingleton;
	}
	template<> INTERACTIONASSIGN_API UClass* StaticClass<AInteractionAssignCharacter>()
	{
		return AInteractionAssignCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractionAssignCharacter);
	struct Z_CompiledInDeferFile_FID_InteractionAssign_Source_InteractionAssign_InteractionAssignCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InteractionAssign_Source_InteractionAssign_InteractionAssignCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AInteractionAssignCharacter, AInteractionAssignCharacter::StaticClass, TEXT("AInteractionAssignCharacter"), &Z_Registration_Info_UClass_AInteractionAssignCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInteractionAssignCharacter), 3588897681U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InteractionAssign_Source_InteractionAssign_InteractionAssignCharacter_h_3319689677(TEXT("/Script/InteractionAssign"),
		Z_CompiledInDeferFile_FID_InteractionAssign_Source_InteractionAssign_InteractionAssignCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_InteractionAssign_Source_InteractionAssign_InteractionAssignCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
