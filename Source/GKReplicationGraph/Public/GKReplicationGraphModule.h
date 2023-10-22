// Copyright 2023 Mischievous Game, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Stats/Stats.h"
#include "Modules/ModuleManager.h"


//*
DECLARE_LOG_CATEGORY_EXTERN(LogGKRG, Log, All);

#define GKRG_FATAL(Format, ...)   UE_LOG(LogGKRG, Fatal, Format, ##__VA_ARGS__)
#define GKRG_ERROR(Format, ...)   UE_LOG(LogGKRG, Error, Format, ##__VA_ARGS__)
#define GKRG_WARNING(Format, ...) UE_LOG(LogGKRG, Warning, Format, ##__VA_ARGS__)
#define GKRG_DISPLAY(Format, ...) UE_LOG(LogGKRG, Display, Format, ##__VA_ARGS__)
#define GKRG_LOG(Format, ...)     UE_LOG(LogGKRG, Log, Format, ##__VA_ARGS__)
#define GKRG_VERBOSE(Format, ...) UE_LOG(LogGKRG, Verbose, Format, ##__VA_ARGS__)
#define GKRG_VERYVERBOSE(Format, ...) UE_LOG(LogGKRG, VeryVerbose, Format, ##__VA_ARGS__)

DECLARE_STATS_GROUP(TEXT("GKReplicationGraph"), STATGROUP_GKRG, STATCAT_Advanced);
//*/

class FGKReplicationGraphModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
