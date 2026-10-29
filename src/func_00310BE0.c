/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char Pes6MatchPlayers[];

u8 func_00310BE0(s32 index, s32 j) {
    s32 maskedIndex;
    s32 slot;
    u8 *rec;

    maskedIndex = index & 0xFF;
    if (maskedIndex != 0xFF) {
        slot = maskedIndex % 23;
    } else {
        slot = 1;
    }
    rec = (u8 *)Pes6MatchPlayers + slot * 0x240;
    return (rec + rec[0x13] * 11)[j + 0x1B4];
}
