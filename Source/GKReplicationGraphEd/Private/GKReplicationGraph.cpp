// Copyright 2023 Mischievous Game, Inc. All Rights Reserved.

#include "GKReplicationGraphEd.h"

// DEFINE_LOG_CATEGORY(LogGKFoW)

// Unreal Engine
#include "Engine/Blueprint.h"
#include "Misc/Paths.h"
#include "Modules/ModuleManager.h"


#define LOCTEXT_NAMESPACE "FGKReplicationGraphEdModule"



void FGKReplicationGraphEdModule::StartupModule()
{
}

void FGKReplicationGraphEdModule::ShutdownModule()
{
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FGKReplicationGraphEdModule, GKReplicationGraphEd)