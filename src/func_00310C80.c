/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_0058E5B4[];

s32 func_00310C80(s32 index) {
    s32 maskedIndex;
    s32 slot;
    u16 kit;

    maskedIndex = index & 0xFF;
    if (maskedIndex != 0xFF) {
        slot = maskedIndex % 23;
    } else {
        slot = 1;
    }
    kit = *(u16 *)(*(u8 **)(D_0058E5B4 + slot * 0x240) + 0x30);
    switch (kit) {
    case 0x5D0:
    case 0x5D1:
        return 1;
    }
    return 0;
}
