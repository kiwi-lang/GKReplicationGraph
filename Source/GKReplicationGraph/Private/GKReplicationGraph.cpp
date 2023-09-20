// Copyright 2023 Mischievous Game, Inc. All Rights Reserved.

#include "GKReplicationGraph.h"

// DEFINE_LOG_CATEGORY(LogGKFoW)

// Unreal Engine
#include "Engine/Blueprint.h"
#include "Misc/Paths.h"
#include "Modules/ModuleManager.h"
#include "ShaderCore.h"

#define LOCTEXT_NAMESPACE "FGKReplicationGraphModule"

static bool AddShaderPath(FString Path, FString Mapping) {
    // Make sure the mapping does not exist before adding it
    if (FPaths::DirectoryExists(Path))
    {
        AddShaderSourceDirectoryMapping(Mapping, Path);
        return true;
    }

    return false;
}


static void EnsureShaderPathIsConfigured() {
    FString VirtualShaderPath = "/GKReplicationGraph";

    bool bShaderDirectoryAlreadyHere = AllShaderSourceDirectoryMappings().Contains(VirtualShaderPath);

    if (!bShaderDirectoryAlreadyHere) {
        // clang-format off
        FString EngineShaderDirectory = FPaths::Combine(FPaths::EnginePluginsDir(), TEXT("GKReplicationGraph"), TEXT("Shaders"));
        FString MarketplaceShaderDirectory = FPaths::Combine(FPaths::EnginePluginsDir(), TEXT("Marketplace"), TEXT("GKReplicationGraph"), TEXT("Shaders"));
        FString ProjectShaderDirectory = FPaths::Combine(FPaths::ProjectPluginsDir(), TEXT("GKReplicationGraph"), TEXT("Shaders"));

        bool bSuccess = 0                                                    // Add Engine directory first
            || AddShaderPath(MarketplaceShaderDirectory, VirtualShaderPath) //
            || AddShaderPath(EngineShaderDirectory, VirtualShaderPath) // 
            || AddShaderPath(ProjectShaderDirectory, VirtualShaderPath) //
            ;

        ensureMsgf(bSuccess, TEXT("A shader directory must be added for the fog of war to work"));
        // clang-format on
    }
    else {
        FString const* Mapped = AllShaderSourceDirectoryMappings().Find(VirtualShaderPath);

        GKFOG_LOG(TEXT("Using %s mapped to %s"), *VirtualShaderPath, **Mapped);
    }
}

void FGKReplicationGraphModule::StartupModule()
{
    EnsureShaderPathIsConfigured();
}

void FGKReplicationGraphModule::ShutdownModule()
{
    // This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
    // we call this function before unloading the module.
    ResetAllShaderSourceDirectoryMappings();
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FGKReplicationGraphModule, GKReplicationGraph)