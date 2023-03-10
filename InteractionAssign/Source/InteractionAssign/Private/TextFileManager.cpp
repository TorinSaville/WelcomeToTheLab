// Fill out your copyright notice in the Description page of Project Settings.


#include "TextFileManager.h"
#include "Misc/FileHelper.h"
#include "HAL/PlatformFilemanager.h"

bool UTextFileManager::SaveArrayText(FString _SaveDir, FString _FileName, TArray<FString> _SaveText, bool _AllowOverwrite = false)
{

	// Set File Path
	_SaveDir += "\\";
	_SaveDir += _FileName;

	if (!_AllowOverwrite) {

		if (FPlatformFileManager::Get().GetPlatformFile().FileExists(*_SaveDir)) {

			return false;

		}

	}

	FString finalString = "";
	for (FString& Each : _SaveText) {

		finalString += Each;
		finalString += LINE_TERMINATOR;

	}

	return FFileHelper::SaveStringToFile(finalString, *_SaveDir);

}
