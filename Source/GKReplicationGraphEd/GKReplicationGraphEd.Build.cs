// Copyright 2023 Mischievous Game, Inc. All Rights Reserved.

using System;
using System.IO;
using UnrealBuildTool;
using System.Diagnostics;
using EpicGames.Core;


public class GKReplicationGraphEd : ModuleRules
{
    public GKReplicationGraphEd(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicIncludePaths.Add(Path.Combine(ModuleDirectory));

        // ... add other public dependencies that you statically link with here ...
        PublicDependencyModuleNames.AddRange(new string[] {
                "Core",
                "CoreUObject",
                "Engine",
                "Slate",
                "SlateCore",

                "GKReplicationGraph",

                "UnrealEd",
        
                "RenderCore",   // Custom Shader
				"AIModule",	    // TeamAgent Interface
				"Landscape",    // Landscape
                "RHI",          // Shader
        });

        PrivateDependencyModuleNames.AddRange(new string[] {

        });

    }
}
