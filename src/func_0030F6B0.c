/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
#include "pes6/float_math.h"

extern char D_0058E5B0[];
extern char D_00591E88[];

f32 func_0030F6B0(s32 index) {
    s32 maskedIndex;
    s32 slot;
    void *record;

    maskedIndex = index & 0xFF;
    if (maskedIndex != 0xFF) {
        slot = maskedIndex % 23;
    } else {
        slot = 1;
    }
    record = ((u8 *)D_0058E5B0) + (slot * 0x240);
    return pes6_multiply_f32(((f32 *)D_00591E88)[M2C_FIELD(record, u8 *, 0x13)], (f32) M2C_FIELD(record, s16 *, 0x14));
}
