// Copyright 2023 Mischievous Game, Inc. All Rights Reserved.

// Include
#include "GKReplicationGraphModule.h"

DEFINE_LOG_CATEGORY(LogGKRG)

// Unreal Engine
#include "Engine/Blueprint.h"
#include "Misc/Paths.h"
#include "Modules/ModuleManager.h"
#include "ShaderCore.h"

#define LOCTEXT_NAMESPACE "FGKReplicationGraphModule"


void FGKReplicationGraphModule::StartupModule()
{
}

void FGKReplicationGraphModule::ShutdownModule()
{
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FGKReplicationGraphModule, GKReplicationGraph)