// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SimplyLovely_Project : ModuleRules
{
	public SimplyLovely_Project(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"NavigationSystem",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"Niagara",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"SimplyLovely_Project",
			"SimplyLovely_Project/Variant_Strategy",
			"SimplyLovely_Project/Variant_Strategy/UI",
			"SimplyLovely_Project/Variant_TwinStick",
			"SimplyLovely_Project/Variant_TwinStick/AI",
			"SimplyLovely_Project/Variant_TwinStick/Gameplay",
			"SimplyLovely_Project/Variant_TwinStick/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
