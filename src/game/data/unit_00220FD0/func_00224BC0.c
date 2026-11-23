/* compiler: mwcc-3.0.1b210 */
#include "pes6/saved_roster.h"

u16 func_00224BC0(u8 slot, u8 index) {
    SavedTeam *team;
    u8 position;
    team = func_002260F0(slot);
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0;
    if (!team)
        return 0;
    position = savedLineupPosition(slot, index);
    if (position >= SAVED_SQUAD_SIZE)
        return 0;
    return team->players[position].playerId;
}
