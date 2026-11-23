/* compiler: mwcc-3.0.1b210 */
#include "pes6/saved_roster.h"

void func_002245D0(u16 teamId, u8 index, u8 number) {
    SavedTeam *team;
    u8 position;
    u8 slot = 0xff;
    u8 i;
    if (Pes6SaveData_IsUnavailable() == 1)
        return;
    for (i = 0; i < 72; ++i) {
        if (teamId == func_00225680(i)) {
            slot = i;
            break;
        }
    }
    if (slot == 0xff)
        return;
    team = func_002260F0(slot);
    if (!team)
        return;
    position = savedLineupPosition(slot, index);
    if (position >= SAVED_SQUAD_SIZE)
        return;
    team->players[index].shirtNumber = number;
}
