/* compiler: mwcc-3.0.1b210 */
#include "pes6/league_fixture_schedule.h"


u8 func_00238630(u8 stage, u8 team) {
    LeagueScheduleStage *st = Pes6SaveData_GetEntry7980(stage);
    u8 first = func_00236680(stage);
    s32 i, end;
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0xff;
    if (!st)
        return 0xff;
    end = first + st->entryCount;
    for (i = first; i < end; i++)
        if (team == (u8)func_00229010(i))
            return i;
    return 0xff;
}
