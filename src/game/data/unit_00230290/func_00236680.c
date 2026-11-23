/* compiler: mwcc-3.0.1b210 */
#include "pes6/competition_records.h"

u8 func_00236680(u8 stage) {
    s32 i;
    u8 total = 0;
    LeagueCompetition *league = func_00229460();
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0;
    if (!league)
        return 0;
    if (stage >= COMPETITION_STAGE_COUNT)
        return 0;
    for (i = 0; i < stage && i < COMPETITION_STAGE_COUNT; i++)
        total += league->stages[i].teamCount;
    return total;
}
