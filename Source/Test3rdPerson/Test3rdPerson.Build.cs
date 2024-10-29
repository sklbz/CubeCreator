// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Test3rdPerson : ModuleRules
{
	public Test3rdPerson(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
