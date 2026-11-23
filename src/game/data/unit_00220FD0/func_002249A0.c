/* compiler: mwcc-3.0.1b210 */
#include "pes6/saved_roster.h"

u8 func_002249A0(u8 slot, u8 index) {
    SavedTeam *team;
    u8 position;
    team = func_002260F0(slot);
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0xff;
    if (!team)
        return 0xff;
    position = savedLineupPosition(slot, index);
    if (position >= SAVED_SQUAD_SIZE)
        return 0xff;
    return team->players[position].shirtNumber;
}
