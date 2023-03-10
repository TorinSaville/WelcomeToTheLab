// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERACTIONASSIGN_InteractionAssignCharacter_generated_h
#error "InteractionAssignCharacter.generated.h already included, missing '#pragma once' in InteractionAssignCharacter.h"
#endif
#define INTERACTIONASSIGN_InteractionAssignCharacter_generated_h

#define FID_InteractionAssign_Source_InteractionAssign_InteractionAssignCharacter_h_13_SPARSE_DATA
#define FID_InteractionAssign_Source_InteractionAssign_InteractionAssignCharacter_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStopSprint); \
	DECLARE_FUNCTION(execStartSprint); \
	DECLARE_FUNCTION(execCountSecond); \
	DECLARE_FUNCTION(execGameTimer); \
	DECLARE_FUNCTION(execInteract); \
	DECLARE_FUNCTION(execRegenStamina); \
	DECLARE_FUNCTION(execDepleteStamina); \
	DECLARE_FUNCTION(execToggleView); \
	DECLARE_FUNCTION(execAddScore); \
	DECLARE_FUNCTION(execAddStamina); \
	DECLARE_FUNCTION(execDamageHealth); \
	DECLARE_FUNCTION(execHealHealth);


#define FID_InteractionAssign_Source_InteractionAssign_InteractionAssignCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStopSprint); \
	DECLARE_FUNCTION(execStartSprint); \
	DECLARE_FUNCTION(execCountSecond); \
	DECLARE_FUNCTION(execGameTimer); \
	DECLARE_FUNCTION(execInteract); \
	DECLARE_FUNCTION(execRegenStamina); \
	DECLARE_FUNCTION(execDepleteStamina); \
	DECLARE_FUNCTION(execToggleView); \
	DECLARE_FUNCTION(execAddScore); \
	DECLARE_FUNCTION(execAddStamina); \
	DECLARE_FUNCTION(execDamageHealth); \
	DECLARE_FUNCTION(execHealHealth);


#define FID_InteractionAssign_Source_InteractionAssign_InteractionAssignCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInteractionAssignCharacter(); \
	friend struct Z_Construct_UClass_AInteractionAssignCharacter_Statics; \
public: \
	DECLARE_CLASS(AInteractionAssignCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InteractionAssign"), NO_API) \
	DECLARE_SERIALIZER(AInteractionAssignCharacter)


#define FID_InteractionAssign_Source_InteractionAssign_InteractionAssignCharacter_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAInteractionAssignCharacter(); \
	friend struct Z_Construct_UClass_AInteractionAssignCharacter_Statics; \
public: \
	DECLARE_CLASS(AInteractionAssignCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InteractionAssign"), NO_API) \
	DECLARE_SERIALIZER(AInteractionAssignCharacter)


#define FID_InteractionAssign_Source_InteractionAssign_InteractionAssignCharacter_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInteractionAssignCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInteractionAssignCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractionAssignCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractionAssignCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractionAssignCharacter(AInteractionAssignCharacter&&); \
	NO_API AInteractionAssignCharacter(const AInteractionAssignCharacter&); \
public:


#define FID_InteractionAssign_Source_InteractionAssign_InteractionAssignCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractionAssignCharacter(AInteractionAssignCharacter&&); \
	NO_API AInteractionAssignCharacter(const AInteractionAssignCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractionAssignCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractionAssignCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInteractionAssignCharacter)


#define FID_InteractionAssign_Source_InteractionAssign_InteractionAssignCharacter_h_9_PROLOG
#define FID_InteractionAssign_Source_InteractionAssign_InteractionAssignCharacter_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_InteractionAssign_Source_InteractionAssign_InteractionAssignCharacter_h_13_SPARSE_DATA \
	FID_InteractionAssign_Source_InteractionAssign_InteractionAssignCharacter_h_13_RPC_WRAPPERS \
	FID_InteractionAssign_Source_InteractionAssign_InteractionAssignCharacter_h_13_INCLASS \
	FID_InteractionAssign_Source_InteractionAssign_InteractionAssignCharacter_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_InteractionAssign_Source_InteractionAssign_InteractionAssignCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_InteractionAssign_Source_InteractionAssign_InteractionAssignCharacter_h_13_SPARSE_DATA \
	FID_InteractionAssign_Source_InteractionAssign_InteractionAssignCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_InteractionAssign_Source_InteractionAssign_InteractionAssignCharacter_h_13_INCLASS_NO_PURE_DECLS \
	FID_InteractionAssign_Source_InteractionAssign_InteractionAssignCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIONASSIGN_API UClass* StaticClass<class AInteractionAssignCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_InteractionAssign_Source_InteractionAssign_InteractionAssignCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
