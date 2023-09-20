// Copyright 2023 Mischievous Game, Inc. All Rights Reserved.

#include "GKReplicationGraphTest.h"

// DEFINE_LOG_CATEGORY(LogGKFoW)

// Unreal Engine
#include "Engine/Blueprint.h"
#include "Misc/Paths.h"
#include "Modules/ModuleManager.h"
#include "ShaderCore.h"

#define LOCTEXT_NAMESPACE "FGKReplicationGraphTestModule"



void FGKReplicationGraphTestModule::StartupModule()
{
}

void FGKReplicationGraphTestModule::ShutdownModule()
{
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FGKReplicationGraphTestModule, GKReplicationGraphTest)