// Copyright 2023 Mischievous Game, Inc. All Rights Reserved.

#pragma once

// Gamekit
#include "GKReplicationGraphModule.h"

// Unreal Engine
#include "GameFramework/GameMode.h"
#include "ReplicationGraph.h"

// Generated
#include "GKRepGraphGameMode.generated.h"


UCLASS()
class AGKRepGraphGameMode : public AGameMode 
{
    GENERATED_BODY()
public:

    AGKRepGraphGameMode(const FObjectInitializer& ObjectInitializer);

    void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage) override;

    /** Replication Graph */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Classes)
    TSubclassOf<UReplicationGraph> GameReplicationGraph;
};
