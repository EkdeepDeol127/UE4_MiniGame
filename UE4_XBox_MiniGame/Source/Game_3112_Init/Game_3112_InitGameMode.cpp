// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Game_3112_InitGameMode.h"
#include "Game_3112_InitCharacter.h"
#include "Online.h"
#include "UObject/ConstructorHelpers.h"

AGame_3112_InitGameMode::AGame_3112_InitGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	auto OnlineSub = IOnlineSubsystem::Get();
	FString nickname = IOnlineSubsystem::Get()->GetIdentityInterface()->GetPlayerNickname(0);

	if (OnlineSub != nullptr)
	{
		auto userIdentityPtr = OnlineSub->GetIdentityInterface();
		if (userIdentityPtr.IsValid())
		{
			FString nickname = OnlineSub->GetIdentityInterface()->GetPlayerNickname(0);
		}
	}
}
