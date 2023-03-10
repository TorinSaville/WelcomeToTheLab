// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TextFileManager.generated.h"

/**
 * 
 */
UCLASS()
class INTERACTIONASSIGN_API UTextFileManager : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		UFUNCTION(BlueprintCallable, Category = "CVS", meta = (Keywords = "Save"))
		static bool SaveArrayText(FString _SaveDir, FString _FileName, TArray<FString> _SaveText, bool _AllowOverwrite);
	
};
