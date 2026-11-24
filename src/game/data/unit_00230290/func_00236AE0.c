/* compiler: mwcc-3.0.1b210 */
#include "pes6/competition_records.h"

extern u8 func_00234E00(u8 team);
extern s32 func_00233EF0(u8 team, u8 round);

s32 func_00236AE0(u8 team) {
    s32 i;
    u8 count;
    LeagueCompetition *league = func_00229460();
    if (Pes6SaveData_IsUnavailable() == 1)
        return 1;
    if (!league)
        return 1;
    count = league->stages[func_00234E00(team)].count;
    for (i = 0; i < count; i++)
        if (func_00233EF0(team, i) == 0)
            return 0;
    return 1;
}
