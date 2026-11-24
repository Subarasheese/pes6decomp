/* compiler: mwcc-3.0.1b210 */
#pragma inline_depth(8)
#include "pes6/competition_stage_order.h"

u8 func_00235170(u8 rank, u8 stage) {
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
