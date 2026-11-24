/* compiler: mwcc-3.0.1b210 */
#include "pes6/league_fixture_schedule.h"

static inline u8 stageEntries(u8 stage) {
    LeagueScheduleStage *st = Pes6SaveData_GetEntry7980(stage);
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0;
    if (!st)
        return 0;
    return st->entryCount;
}

s32 func_00238480(void) {
    LeagueSchedule *league = func_00229460();
    s32 i, j, stage, total;
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0;
    if (!league)
        return 0;
    i = 0;
    total = 0;
    stage = 0;
    for (; i < 8; i++) {
        for (j = 0; j < league->stageGroups[i]; j++) {
            total += stageEntries(stage);
            stage++;
        }
    }
    return total;
}
