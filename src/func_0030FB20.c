/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_0058E5C1[];
extern char D_0058E5C2[];
extern char D_00591BE4[];
extern char D_00592A60[];

s32 func_0030FB20(s32 index) {
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
    return (s32) (*(s32 *)((*(((u8 *)D_0058E5C1) + (otherSlot * 0x240)) * 0x348) + (((u8 *)D_00592A60) + (*(((u8 *)D_0058E5C2) + (slot * 0x240)) * 0x6900))) * 0x64) / (s32) ((*(u8 *)D_00591BE4) * 0x3E8);
}
