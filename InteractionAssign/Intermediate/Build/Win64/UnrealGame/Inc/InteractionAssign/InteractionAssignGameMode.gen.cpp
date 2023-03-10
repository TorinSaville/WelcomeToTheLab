// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractionAssign/InteractionAssignGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionAssignGameMode() {}
// Cross Module References
	INTERACTIONASSIGN_API UClass* Z_Construct_UClass_AInteractionAssignGameMode_NoRegister();
	INTERACTIONASSIGN_API UClass* Z_Construct_UClass_AInteractionAssignGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_InteractionAssign();
// End Cross Module References
	void AInteractionAssignGameMode::StaticRegisterNativesAInteractionAssignGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInteractionAssignGameMode);
	UClass* Z_Construct_UClass_AInteractionAssignGameMode_NoRegister()
	{
		return AInteractionAssignGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AInteractionAssignGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInteractionAssignGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractionAssign,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractionAssignGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "InteractionAssignGameMode.h" },
		{ "ModuleRelativePath", "InteractionAssignGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInteractionAssignGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractionAssignGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AInteractionAssignGameMode_Statics::ClassParams = {
		&AInteractionAssignGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AInteractionAssignGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionAssignGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInteractionAssignGameMode()
	{
		if (!Z_Registration_Info_UClass_AInteractionAssignGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInteractionAssignGameMode.OuterSingleton, Z_Construct_UClass_AInteractionAssignGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AInteractionAssignGameMode.OuterSingleton;
	}
	template<> INTERACTIONASSIGN_API UClass* StaticClass<AInteractionAssignGameMode>()
	{
		return AInteractionAssignGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractionAssignGameMode);
	struct Z_CompiledInDeferFile_FID_InteractionAssign_Source_InteractionAssign_InteractionAssignGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InteractionAssign_Source_InteractionAssign_InteractionAssignGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AInteractionAssignGameMode, AInteractionAssignGameMode::StaticClass, TEXT("AInteractionAssignGameMode"), &Z_Registration_Info_UClass_AInteractionAssignGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInteractionAssignGameMode), 254555005U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InteractionAssign_Source_InteractionAssign_InteractionAssignGameMode_h_516054460(TEXT("/Script/InteractionAssign"),
		Z_CompiledInDeferFile_FID_InteractionAssign_Source_InteractionAssign_InteractionAssignGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_InteractionAssign_Source_InteractionAssign_InteractionAssignGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
