// Copyright Epic Games, Inc. All Rights Reserved.

#include "mobile_mkrdemoGameMode.h"
#include "mobile_mkrdemoPawn.h"
#include "mobile_mkrdemoHud.h"

Amobile_mkrdemoGameMode::Amobile_mkrdemoGameMode()
{
	DefaultPawnClass = Amobile_mkrdemoPawn::StaticClass();
	HUDClass = Amobile_mkrdemoHud::StaticClass();
}
