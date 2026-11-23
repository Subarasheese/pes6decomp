/* compiler: mwcc-3.0.1b210 */
#include "pes6/saved_roster.h"

SavedTeamPlayer *func_00224E20(u8 slot, u8 index) {
    SavedTeam *team = func_002260F0(slot);
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0;
    if (!team)
        return 0;
    if (index >= SAVED_SQUAD_SIZE)
        return 0;
    return &team->players[index];
}
