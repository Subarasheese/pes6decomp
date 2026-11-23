/* compiler: mwcc-3.0.1b210 */
#pragma inline_depth(8)
#include "pes6/competition_stage_order.h"

extern u16 func_002290D0(u8 slot);

u16 func_00234F10(u8 rank, u8 stage) {
    LeagueCompetition *league = func_00229460();
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0xffff;
    if (!league)
        return 0xffff;
    if (league->stageCount <= stage)
        return 0xffff;
    if (league->stages[stage].entryCount <= rank)
        return 0xffff;
    return func_002290D0(stageTeamAtRank(rank, stage));
}
