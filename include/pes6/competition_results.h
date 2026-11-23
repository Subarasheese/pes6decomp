#ifndef PES6_COMPETITION_RESULTS_H
#define PES6_COMPETITION_RESULTS_H

#include "pes6/competition_records.h"

extern u8 *func_00232510(u8 *results, u8 team, u8 match);
extern u8 func_00234E00(u8 team);

static inline u8 savedMatchResult(u8 *results, u8 team, u8 match) {
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0;
    return *func_00232510(results, team, match);
}

static inline s32 lastResult(u8 team) {
    u8 stage, match;
    LeagueCompetition *league = func_00229460();
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0;
    if (!league)
        return 0;
    stage = func_00234E00(team);
    match = league->stages[stage].count - 1;
    return savedMatchResult(league->results, team, match);
}

#endif
