/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002260F0(s32);
s32 func_00B2B250(s32 arg0, s32 arg1) {
    s32 temp_s0;
    u8 temp_a0;
    u8 temp_v1;

    temp_s0 = func_002260F0(arg0);
    temp_a0 = M2C_FIELD(func_002260F0(arg1), u8 *, 0x4A4);
    temp_v1 = M2C_FIELD(temp_s0, u8 *, 0x4A4);
    if (((temp_v1 + 3) >= (s32) temp_a0) && ((s32) temp_a0 >= (temp_v1 - 3))) {
        return 1;
    }
    if ((s32) temp_a0 >= (s32) temp_v1) {
        return 2;
    }
    return 0;
}
