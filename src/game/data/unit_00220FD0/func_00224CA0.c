/* compiler: mwcc-3.0.1b210 */
#include "pes6/saved_roster.h"

void func_00224CA0(u8 slot, u8 index, u16 playerId) {
    SavedTeam *team;
    u8 position;
    team = func_002260F0(slot);
    if (Pes6SaveData_IsUnavailable() == 1)
        return;
    if (!team)
        return;
    position = savedLineupPosition(slot, index);
    if (position >= SAVED_SQUAD_SIZE)
        return;
    team->players[position].playerId = playerId;
    team->players[position].teamSlot = slot;
}
