/* compiler: mwcc-3.0.1b210 */

#include "pes6/competition_records.h"

static inline u16 standingGoalsAgainst(s32 index) {
    LeagueCompetition *league = func_00229460();
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0;
    if (!league)
        return 0;
    if ((u8)index >= LEAGUE_TEAM_COUNT)
        return 0;
    return league->table[(u8)index].goalsAgainst;
}

u16 func_00235EB0(s32 group, s32 team) {
    u8 index;
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0;
    index = (u8)func_00228ED0(group, team);
    if (index == 0xff)
        return 0;
    return standingGoalsAgainst(index);
}
