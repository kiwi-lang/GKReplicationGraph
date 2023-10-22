// Copyright 2023 Mischievous Game, Inc. All Rights Reserved.

// Include
#include "GKReplicationGraph.h"




void RegisterReplicationGraph(TSubclassOf<UReplicationGraph> ReplicationGraphClass)
{
    UReplicationDriver::CreateReplicationDriverDelegate().BindLambda(
        [&ReplicationGraphClass](UNetDriver* ForNetDriver, const FURL& URL, UWorld* World) -> UReplicationDriver*
    {
        return NewObject<UReplicationGraph>(GetTransientPackage(), ReplicationGraphClass);
    }
    );
}
