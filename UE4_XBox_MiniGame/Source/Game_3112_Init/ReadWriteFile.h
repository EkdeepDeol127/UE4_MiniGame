// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "PlatformFilemanager.h"
#include "ReadWriteFile.generated.h"

/**
 *
 */
UCLASS()
class GAME_3112_INIT_API UReadWriteFile : public UBlueprintFunctionLibrary
{
GENERATED_BODY() public:

	UFUNCTION(BlueprintCallable, Category = "Custom", meta = (Keywords = "LoadText"))
		static bool ReadText(FString filePath, FString& textOutput);

	UFUNCTION(BlueprintCallable, Category = "Custom", meta = (Keywords = "SaveText"))
		static bool WriteText(FString textInput, FString filePath);
};