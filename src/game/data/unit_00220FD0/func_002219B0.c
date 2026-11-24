/* compiler: mwcc-3.0.1b210 */
#include "pes6/roster_lookup.h"
u8 func_002219B0(s32 player, u16 team, s32 mode) {
    const u8 count = func_00221A60(team);
    u8 slot;
    if ((u16)player == 0)
        return 0xff;
    for (slot = 0; slot < count; slot++) {
        if ((u16)player == Pes6Team_GetPlayerId(team, slot, mode))
            return slot;
    }
    return 0xff;
}
