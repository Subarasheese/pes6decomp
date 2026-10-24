/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_0058E5B0[];
s32 func_00A9BA10(void *);

f32 func_003117E0(s32 index) {
    s32 maskedIndex;
    s32 slot;

    maskedIndex = index & 0xFF;
    if (maskedIndex != 0xFF) {
        slot = maskedIndex % 23;
    } else {
        slot = 1;
    }
    return func_00A9BA10(D_0058E5B0 + slot * 0x240);
}
