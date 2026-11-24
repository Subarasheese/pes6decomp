/* compiler: mwcc-3.0.1b210 */
#include "pes6/competition_records.h"

extern s32 func_00236BA0(u8 group, u8 round);

s32 func_00236CF0(u8 stage) {
    s32 i;
    LeagueCompetition *league = func_00229460();
    if (Pes6SaveData_IsUnavailable() == 1)
        return 1;
    if (!league)
        return 1;
    if (stage >= COMPETITION_STAGE_COUNT)
        return 1;
    for (i = 0; i < league->stages[stage].count; ++i)
        if (func_00236BA0(stage, i) == 0)
            return 0;
    return 1;
}
