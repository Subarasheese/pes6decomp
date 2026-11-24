/* compiler: mwcc-3.0.1b210 */
#pragma inline_depth(3)
#include "pes6/competition_results.h"

s32 func_00235CB0(u8 team) {
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
