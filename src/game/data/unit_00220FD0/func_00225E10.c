/* compiler: mwcc-3.0.1b210 */
#include "pes6/saved_teams.h"

u8 func_00225E10(void) {
    u8 i, count = 0;
    SavedTeam *team = savedTeamAt(selectedTeamSlot());
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0;
    if (!team)
        return 0;
    for (i = 0; i < SAVED_SQUAD_SIZE; ++i)
        if (team->players[i].playerId)
            ++count;
    return count;
}
