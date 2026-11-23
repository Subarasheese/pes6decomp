/* compiler: mwcc-3.0.1b210 */
#include "pes6/saved_roster.h"

u8 func_00224310(u8 slot, u8 position) {
    u8 i;
    SavedTeam *team = func_002260F0(slot);
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0xff;
    if (!team)
        return 0xff;
    if (position >= SAVED_SQUAD_SIZE)
        return 0xff;
    for (i = 0; i < SAVED_SQUAD_SIZE; ++i)
        if (position == team->lineup[i])
            return i;
    return 0xff;
}
