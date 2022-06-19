// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class mobile_mkrdemo : ModuleRules
{
	public mobile_mkrdemo(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "PhysXVehicles", "HeadMountedDisplay", "PhysicsCore" });

		PublicDefinitions.Add("HMD_MODULE_INCLUDED=1");
	}
}
