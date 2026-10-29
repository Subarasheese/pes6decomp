/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_0058E5C1[];
extern char D_0058E5C2[];
extern char Pes6MatchSquads[];

u64 func_00310440(s32 index) {
    s32 maskedIndex;
    s32 slot;
    s32 otherSlot;

    maskedIndex = index & 0xFF;
    if (maskedIndex != 0xFF) {
        otherSlot = maskedIndex % 23;
    } else {
        otherSlot = 1;
    }
    if (maskedIndex != 0xFF) {
        slot = maskedIndex % 23;
    } else {
        slot = 1;
    }
    return (u64) ((u64) M2C_FIELD(((*(((u8 *)D_0058E5C1) + (otherSlot * 0x240)) * 0x348) + (((u8 *)Pes6MatchSquads) + (*(((u8 *)D_0058E5C2) + (slot * 0x240)) * 0x6900))), u8 *, 0x85) << 0x3A) >> 0x3D;
}
