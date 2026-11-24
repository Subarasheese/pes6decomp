/* compiler: mwcc-3.0.1b210 */
#include "pes6/competition_stage_order.h"

u8 func_00235800(u8 stage) {
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
