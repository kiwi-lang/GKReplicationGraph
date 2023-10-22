// Copyright 2023 Mischievous Game, Inc. All Rights Reserved.

using System;
using System.IO;
using UnrealBuildTool;
using System.Diagnostics;
using EpicGames.Core;


public class GKReplicationGraph : ModuleRules
{
    public GKReplicationGraph(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicIncludePaths.Add(Path.Combine(ModuleDirectory));

        // ... add other public dependencies that you statically link with here ...
        PublicDependencyModuleNames.AddRange(new string[] {
                "Core",
                "GKReplicationGraphShader",
                "ReplicationGraph",
        });

        PrivateDependencyModuleNames.AddRange(new string[] {
                "CoreUObject",
                "Engine",
                "Slate",
                "SlateCore",

                "RenderCore",   // Custom Shader
				"AIModule",	    // TeamAgent Interface
				"Landscape",    // Landscape
                "RHI",          // Shader
        });

        // Version Info
        // ------------
        // Automatically set by the CI
        string GKReplicationGraph_TAG = "v1.2.0";
        string GKReplicationGraph_HASH = "fd5965b0a334ba5784929aac36716dbf0e9fb9fb";
        string GKReplicationGraph_DATE = "2023-01-15 03:23:34 +0000";

        PublicDefinitions.Add("GKReplicationGraph_TAG=" + GKReplicationGraph_TAG);
        PublicDefinitions.Add("GKReplicationGraph_COMMIT=" + GKReplicationGraph_HASH);
        PublicDefinitions.Add("GKReplicationGraph_DATE=" + GKReplicationGraph_DATE);
    }
}
