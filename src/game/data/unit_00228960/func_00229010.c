/* compiler: mwcc-3.0.1b210 */
#include "pes6/competition_records.h"

s32 func_00229010(u8 index) {
    LeagueCompetition *data = leagueTeamList();
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0xff;
    if (!data)
        return 0xff;
    if (index >= LEAGUE_TEAM_COUNT)
        return 0xff;
    return data->slots[index];
}
