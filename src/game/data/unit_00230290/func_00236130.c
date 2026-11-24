/* compiler: mwcc-3.0.1b210 */
#include "pes6/competition_records.h"

static inline u8 standingLosses(u8 index) {
    LeagueCompetition *league = func_00229460();
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0;
    if (!league)
        return 0;
    if (index >= LEAGUE_TEAM_COUNT)
        return 0;
    return league->table[index].losses;
}

u8 func_00236130(s32 group, s32 team) {
    u8 index;
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0;
    index = func_00228ED0(group, team);
    if (index == 0xff)
        return 0;
    return standingLosses(index);
}
