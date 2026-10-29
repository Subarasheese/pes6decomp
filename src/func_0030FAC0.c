/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern char Pes6MatchPlayers[];

u16 func_0030FAC0(s32 index, s32 arg1) {
    s32 maskedIndex;
    s32 slot;
    void *record;

    maskedIndex = index & 0xFF;
    if (maskedIndex != 0xFF) {
        slot = maskedIndex % 23;
    } else {
        slot = 1;
    }
    record = ((u8 *)Pes6MatchPlayers) + (slot * 0x240);
    if (arg1 != 0) {
        return (M2C_FIELD(record, u16 *, 0x28) + M2C_FIELD(record, u16 *, 0x2A)) & 0xFFFF;
    }
    return M2C_FIELD(record, u16 *, 0x28);
}
