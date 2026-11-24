/* compiler: mwcc-3.0.1b210 */
#include "pes6/saved_teams.h"
u16 func_00225680(u8 slot) {
    SavedTeam *entry = savedTeamAt(slot);
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0xffff;
    if (entry == 0)
        return 0xffff;
    return entry->teamId;
}
