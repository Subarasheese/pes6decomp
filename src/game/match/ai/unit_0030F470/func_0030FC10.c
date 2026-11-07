/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern char D_0058E5CC[];

s32 func_0030FC10(s32 index) {
    s32 maskedIndex;
    s32 slot;

    maskedIndex = index & 0xFF;
    if (maskedIndex != 0xFF) {
        slot = maskedIndex % 23;
    } else {
        slot = 1;
    }
    return *(s32 *)(D_0058E5CC + slot * 0x240);
}
