/* compiler: mwcc-3.0.1b210 */
#include "pes6/league_fixture_schedule.h"

extern LeagueSchedule *D_003E77B4;

u8 func_00234370(void) {
    u8 stage = D_003E77B4->selectedStage;
    LeagueSchedule *schedule = func_00229460();
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0;
    if (!schedule)
        return 0;
    return (schedule->stages[stage].daysPerCycle * schedule->stages[stage].series - 1);
}
