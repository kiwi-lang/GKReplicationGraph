// Copyright 2023 Mischievous Game, Inc. All Rights Reserved.

// Include
#include "GKReplicationGraphSettings.h"

// Gamekit 
#include "GKReplicationGraph.h"

// Unreal Engine
#include "Misc/App.h"


UGKReplicationGraphSettings::UGKReplicationGraphSettings()
{
	CategoryName = TEXT("Game");
	DefaultReplicationGraphClass = UGKReplicationGraph::StaticClass();
}