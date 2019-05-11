// Fill out your copyright notice in the Description page of Project Settings.

#include "ReadWriteFile.h"

bool UReadWriteFile::ReadText(FString filePath, FString& textOutput)
{
	
		return FFileHelper::LoadFileToString(textOutput, *(FPaths::GameDir() + filePath));
	
}

bool UReadWriteFile::WriteText(FString textInput, FString filePath)
{
	return FFileHelper::SaveStringToFile(textInput, *(FPaths::GameDir() + filePath));
}