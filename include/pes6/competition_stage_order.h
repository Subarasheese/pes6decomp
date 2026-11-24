#ifndef PES6_COMPETITION_STAGE_ORDER_H
#define PES6_COMPETITION_STAGE_ORDER_H

#include "pes6/competition_records.h"

static inline u8 firstStageRank(u8 stage) {
    u8 i, total = 0;
    LeagueCompetition *league = func_00229460();
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0;
    if (!league)
        return 0;
    if (stage > 0 && stage < COMPETITION_STAGE_COUNT) {
        for (i = 0; i < stage; i++)
            total += league->stages[i].entryCount;
    }
    return total;
}

static inline u8 stageTeamAtRank(u8 rank, u8 stage) {
    LeagueCompetition *league = func_00229460();
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0xff;
    if (!league)
        return 0xff;
    if (league->stageCount <= stage)
        return 0xff;
    if (league->stages[stage].entryCount <= rank)
        return 0xff;
    return league->stageSlots[firstStageRank(stage) + rank];
}

static inline u8 currentStageNumber(void) {
    LeagueCompetition *league = func_00229460();
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0;
    if (!league)
        return 0;
    return league->currentStage;
}

static inline u8 currentStageTeamAtRank(u8 rank) {
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0;
    return stageTeamAtRank(rank, currentStageNumber());
}

#endif
