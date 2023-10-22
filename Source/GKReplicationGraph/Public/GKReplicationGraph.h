// Copyright 2023 Mischievous Game, Inc. All Rights Reserved.

#pragma once

// Gamekit
#include "GKReplicationGraphModule.h"

// Unreal Engine
#include "ReplicationGraph.h"

// Generated
#include "GKReplicationGraph.generated.h"


// To be called in the AGameMode::InitGame ?
// 
//  This delegate is called 
//      1. UReplicationDriver* UReplicationDriver::CreateReplicationDriver(UNetDriver* NetDriver, const FURL& URL, UWorld* World)
//      2. bool UNetDriver::InitBase(bool bInitAsClient, FNetworkNotify* InNotify, const FURL& URL, bool bReuseAddressAndPort, FString& Error)
//      3. Called in OnlineSystemSystem
//
//
//
template<typename T>
void RegisterReplicationGraph()
{
    UReplicationDriver::CreateReplicationDriverDelegate().BindLambda(
        [](UNetDriver* ForNetDriver, const FURL& URL, UWorld* World) -> UReplicationDriver*
    {
        return NewObject<UGKReplicationGraph>(GetTransientPackage());
    }
    );
}

void RegisterReplicationGraph(TSubclassOf<UReplicationGraph> ReplicationGraphClass);

// Manages actor replication for an entire world / net driver
UCLASS()
class UGKReplicationGraph : public UReplicationGraph
{
    GENERATED_BODY()
public:

    // Manages actor replication for a specific connection
    // UNetReplicationGraphConnection
    // 
    // UReplicationGraphNode
    // UReplicationGraphNode_ActorList
    // UReplicationGraphNode_ActorListFrequencyBuckets
    // UReplicationGraphNode_AlwaysRelevant
    // UReplicationGraphNode_AlwaysRelevant_ForConnection 	
    // UReplicationGraphNode_ConnectionDormancyNode
    // UReplicationGraphNode_DormancyNode
    // UReplicationGraphNode_DynamicSpatialFrequency
    // UReplicationGraphNode_GridCell
    // UReplicationGraphNode_GridSpatialization2D
    // UReplicationGraphNode_TearOff_ForConnection
};