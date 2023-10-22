// Copyright 2023 Mischievous Game, Inc. All Rights Reserved.

#pragma once

#include "Modules/ModuleManager.h"
#include "Stats/Stats.h"

//*
DECLARE_LOG_CATEGORY_EXTERN(LogGKRGS, Log, All);

#define GKRGS_FATAL(Format, ...)   UE_LOG(LogGKRGS, Fatal, Format, ##__VA_ARGS__)
#define GKRGS_ERROR(Format, ...)   UE_LOG(LogGKRGS, Error, Format, ##__VA_ARGS__)
#define GKRGS_WARNING(Format, ...) UE_LOG(LogGKRGS, Warning, Format, ##__VA_ARGS__)
#define GKRGS_DISPLAY(Format, ...) UE_LOG(LogGKRGS, Display, Format, ##__VA_ARGS__)
#define GKRGS_LOG(Format, ...)     UE_LOG(LogGKRGS, Log, Format, ##__VA_ARGS__)
#define GKRGS_VERBOSE(Format, ...) UE_LOG(LogGKRGS, Verbose, Format, ##__VA_ARGS__)
#define GKRGS_VERYVERBOSE(Format, ...) UE_LOG(LogGKRGS, VeryVerbose, Format, ##__VA_ARGS__)

DECLARE_STATS_GROUP(TEXT("GKReplicationGraph"), STATGROUP_GKRGS, STATCAT_Advanced);
//*/


class FGKReplicationGraphShaderModule: public IModuleInterface
{
    public:
    /** IModuleInterface implementation */
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;
};
