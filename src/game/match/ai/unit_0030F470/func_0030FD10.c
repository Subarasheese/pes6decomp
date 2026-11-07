/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_0058E5C1[];
extern char D_0058E5C2[];
extern char Pes6MatchSquads[];
typedef struct { u8 reserved:2; u8 value:6; } Packed;

s32 func_0030FD10(s32 index) {
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
    return ((Packed *)((u8 *)((*(((u8 *)D_0058E5C1) + (otherSlot * 0x240)) * 0x348) + (((u8 *)Pes6MatchSquads) + (*(((u8 *)D_0058E5C2) + (slot * 0x240)) * 0x6900))) + 0x8C))->value + 0x94;
}
