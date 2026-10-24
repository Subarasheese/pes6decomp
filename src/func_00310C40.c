/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_0058E5D6[];

u16 func_00310C40(s32 index) {
    s32 maskedIndex;
    s32 slot;

    maskedIndex = index & 0xFF;
    if (maskedIndex != 0xFF) {
        slot = maskedIndex % 23;
    } else {
        slot = 1;
    }
    return *(u16 *)(D_0058E5D6 + slot * 0x240);
}
