/* compiler: mwcc-3.0.1b210 */
#include "pes6/saved_roster.h"

u16 func_00224150(u16 team, u8 index, s32 mode) {
    u8 i, slot = 0xff;
    SavedTeam *t;
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0;
    if ((u8)mode != 0)
        return 0;
    if (team >= 0xfe && team <= 0x103)
        slot = team - 0xfe + 72;
    else if (team >= 0xfe && team <= 0x10d) {
        for (i = 6; i < 8; ++i) {
            t = func_002260F0(i + 72);
            if (!t)
                return 0;
            if (team == t->teamId) {
                slot = i + 72;
                break;
            }
        }
        if (slot == 0xff)
            return 0;
    } else
        return 0;
    t = func_002260F0(slot);
    if (!t)
        return 0;
    return t->players[index].playerId;
}
