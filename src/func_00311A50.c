/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_0058E5B0[];

s32 func_00311A50(u8 *a, u8 *b, s32 index) {
    s32 maskedIndex;
    s32 slot;
    u8 *rec;

    maskedIndex = index & 0xFF;
    if (maskedIndex == 0 || maskedIndex >= 23) {
        *a = 0xFF;
        *b = 0xFF;
        return 0;
    }
    if (maskedIndex != 0xFF) {
        slot = maskedIndex % 23;
    } else {
        slot = 1;
    }
    rec = (u8 *)D_0058E5B0 + slot * 0x240;
    *a = rec[0x12];
    *b = rec[0x11];
    return 1;
}
