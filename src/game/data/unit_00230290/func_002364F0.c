/* compiler: mwcc-3.0.1b210 */
#include "pes6/competition_records.h"

u8 func_002364F0(u8 index) {
    LeagueCompetition *league = func_00229460();
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0xff;
    if (!league)
        return 0xff;
    if (index >= LEAGUE_TEAM_COUNT)
        return 0xff;
    return league->table[index].value09;
}
