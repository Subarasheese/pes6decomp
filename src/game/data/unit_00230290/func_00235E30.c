/* compiler: mwcc-3.0.1b210 */
#include "pes6/competition_records.h"

u8 func_00235E30(u8 index) {
    LeagueCompetition *league = func_00229460();
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0;
    if (!league)
        return 0;
    if (index >= LEAGUE_TEAM_COUNT)
        return 0;
    return league->table[index].points;
}
