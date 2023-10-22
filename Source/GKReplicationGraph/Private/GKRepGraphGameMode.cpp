// Include
#include "GKRepGraphGameMode.h"

// Gamekit
#include "GKReplicationGraph.h"



AGKRepGraphGameMode::AGKRepGraphGameMode(const FObjectInitializer& ObjectInitializer):
    Super(ObjectInitializer)
{
    GameReplicationGraph = UReplicationGraph::StaticClass();
}

void AGKRepGraphGameMode::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage) 
{
    RegisterReplicationGraph(GameReplicationGraph);

    Super::InitGame(MapName, Options, ErrorMessage);

}