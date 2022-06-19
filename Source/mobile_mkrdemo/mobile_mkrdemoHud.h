// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "mobile_mkrdemoHud.generated.h"

UCLASS(config = Game)
class Amobile_mkrdemoHud : public AHUD
{
	GENERATED_BODY()

public:
	Amobile_mkrdemoHud();

	/** Font used to render the vehicle info */
	UPROPERTY()
	UFont* HUDFont;

	// Begin AHUD interface
	virtual void DrawHUD() override;
	// End AHUD interface

};
