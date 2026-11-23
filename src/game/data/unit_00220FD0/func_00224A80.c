/* compiler: mwcc-3.0.1b210 */
#include "pes6/saved_roster.h"

u16 func_00224A80(u16 teamId, u8 index) {
    SavedTeam *team;
    u8 position;
    u8 slot = 0xff;
    u8 i;
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0;
    for (i = 0; i < SAVED_TEAM_COUNT; ++i) {
        if (teamId == func_00225680(i)) {
            slot = i;
            break;
        }
    }
    if (slot == 0xff)
        return 0;
    team = func_002260F0(slot);
    if (!team)
        return 0;
    position = savedLineupPosition(slot, index);
    if (position >= SAVED_SQUAD_SIZE)
        return 0;
    return team->players[position].playerId;
}
