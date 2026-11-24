/* compiler: mwcc-3.0.1b210 */
#include "pes6/saved_teams.h"
u8 *func_00225F60(u8 slot) {
    SavedTeam *entry = savedTeamAt(slot);
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0;
    if (entry == 0)
        return 0;
    return entry->settings;
}
