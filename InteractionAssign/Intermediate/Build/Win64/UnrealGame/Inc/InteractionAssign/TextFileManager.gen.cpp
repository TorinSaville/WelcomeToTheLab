// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractionAssign/Public/TextFileManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextFileManager() {}
// Cross Module References
	INTERACTIONASSIGN_API UClass* Z_Construct_UClass_UTextFileManager_NoRegister();
	INTERACTIONASSIGN_API UClass* Z_Construct_UClass_UTextFileManager();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_InteractionAssign();
// End Cross Module References
	DEFINE_FUNCTION(UTextFileManager::execSaveArrayText)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__SaveDir);
		P_GET_PROPERTY(FStrProperty,Z_Param__FileName);
		P_GET_TARRAY(FString,Z_Param__SaveText);
		P_GET_UBOOL(Z_Param__AllowOverwrite);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTextFileManager::SaveArrayText(Z_Param__SaveDir,Z_Param__FileName,Z_Param__SaveText,Z_Param__AllowOverwrite);
		P_NATIVE_END;
	}
	void UTextFileManager::StaticRegisterNativesUTextFileManager()
	{
		UClass* Class = UTextFileManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SaveArrayText", &UTextFileManager::execSaveArrayText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTextFileManager_SaveArrayText_Statics
	{
		struct TextFileManager_eventSaveArrayText_Parms
		{
			FString _SaveDir;
			FString _FileName;
			TArray<FString> _SaveText;
			bool _AllowOverwrite;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp__SaveDir;
		static const UECodeGen_Private::FStrPropertyParams NewProp__FileName;
		static const UECodeGen_Private::FStrPropertyParams NewProp__SaveText_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp__SaveText;
		static void NewProp__AllowOverwrite_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp__AllowOverwrite;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTextFileManager_SaveArrayText_Statics::NewProp__SaveDir = { "_SaveDir", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextFileManager_eventSaveArrayText_Parms, _SaveDir), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTextFileManager_SaveArrayText_Statics::NewProp__FileName = { "_FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextFileManager_eventSaveArrayText_Parms, _FileName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTextFileManager_SaveArrayText_Statics::NewProp__SaveText_Inner = { "_SaveText", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTextFileManager_SaveArrayText_Statics::NewProp__SaveText = { "_SaveText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextFileManager_eventSaveArrayText_Parms, _SaveText), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTextFileManager_SaveArrayText_Statics::NewProp__AllowOverwrite_SetBit(void* Obj)
	{
		((TextFileManager_eventSaveArrayText_Parms*)Obj)->_AllowOverwrite = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTextFileManager_SaveArrayText_Statics::NewProp__AllowOverwrite = { "_AllowOverwrite", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TextFileManager_eventSaveArrayText_Parms), &Z_Construct_UFunction_UTextFileManager_SaveArrayText_Statics::NewProp__AllowOverwrite_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTextFileManager_SaveArrayText_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TextFileManager_eventSaveArrayText_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTextFileManager_SaveArrayText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TextFileManager_eventSaveArrayText_Parms), &Z_Construct_UFunction_UTextFileManager_SaveArrayText_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextFileManager_SaveArrayText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextFileManager_SaveArrayText_Statics::NewProp__SaveDir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextFileManager_SaveArrayText_Statics::NewProp__FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextFileManager_SaveArrayText_Statics::NewProp__SaveText_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextFileManager_SaveArrayText_Statics::NewProp__SaveText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextFileManager_SaveArrayText_Statics::NewProp__AllowOverwrite,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextFileManager_SaveArrayText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextFileManager_SaveArrayText_Statics::Function_MetaDataParams[] = {
		{ "Category", "CVS" },
		{ "Keywords", "Save" },
		{ "ModuleRelativePath", "Public/TextFileManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextFileManager_SaveArrayText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextFileManager, nullptr, "SaveArrayText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTextFileManager_SaveArrayText_Statics::TextFileManager_eventSaveArrayText_Parms), Z_Construct_UFunction_UTextFileManager_SaveArrayText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextFileManager_SaveArrayText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextFileManager_SaveArrayText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextFileManager_SaveArrayText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextFileManager_SaveArrayText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextFileManager_SaveArrayText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextFileManager);
	UClass* Z_Construct_UClass_UTextFileManager_NoRegister()
	{
		return UTextFileManager::StaticClass();
	}
	struct Z_Construct_UClass_UTextFileManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextFileManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractionAssign,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTextFileManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTextFileManager_SaveArrayText, "SaveArrayText" }, // 4036210371
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextFileManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TextFileManager.h" },
		{ "ModuleRelativePath", "Public/TextFileManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextFileManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextFileManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextFileManager_Statics::ClassParams = {
		&UTextFileManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTextFileManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextFileManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextFileManager()
	{
		if (!Z_Registration_Info_UClass_UTextFileManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextFileManager.OuterSingleton, Z_Construct_UClass_UTextFileManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTextFileManager.OuterSingleton;
	}
	template<> INTERACTIONASSIGN_API UClass* StaticClass<UTextFileManager>()
	{
		return UTextFileManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextFileManager);
	struct Z_CompiledInDeferFile_FID_InteractionAssign_Source_InteractionAssign_Public_TextFileManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InteractionAssign_Source_InteractionAssign_Public_TextFileManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTextFileManager, UTextFileManager::StaticClass, TEXT("UTextFileManager"), &Z_Registration_Info_UClass_UTextFileManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextFileManager), 322790865U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InteractionAssign_Source_InteractionAssign_Public_TextFileManager_h_1711272729(TEXT("/Script/InteractionAssign"),
		Z_CompiledInDeferFile_FID_InteractionAssign_Source_InteractionAssign_Public_TextFileManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_InteractionAssign_Source_InteractionAssign_Public_TextFileManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
