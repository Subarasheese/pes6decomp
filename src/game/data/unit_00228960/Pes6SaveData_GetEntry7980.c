/* compiler: mwcc-3.0.1b210 */
#include "pes6/league_fixture_schedule.h"

extern u8 *Pes6SaveData_Current;
static inline LeagueSchedule *savedLeague(void) {
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0;
    if (Pes6SaveData_Current)
        return (LeagueSchedule *)(Pes6SaveData_Current + 0x7980);
    return 0;
}

LeagueScheduleStage *Pes6SaveData_GetEntry7980(s32 index) {
    LeagueSchedule *league = savedLeague();
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0;
    if (index >= LEAGUE_SCHEDULE_STAGES)
        return 0;
    return &league->stages[index];
}
