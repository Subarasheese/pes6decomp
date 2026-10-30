/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_0063BEB0(void *arg0, s32 arg1, s32 arg2) {
    s32 var_a7;
    s64 var_v1;
    u8 temp_a4;

    if (arg2 != 0x10) {
        var_v1 = 1;
    } else {
        var_v1 = 9;
    }
    do {
        M2C_FIELD(arg0, u8 *, 0xC) = (u8) (M2C_FIELD(arg0, u8 *, 0xC) + (((s64) (var_v1 << 0x38) >> 0x38) & 0xFF));
        M2C_FIELD(arg0, u8 *, 0xC) = (u8) ((u8) M2C_FIELD(arg0, u8 *, 0xC) % 9U);
        temp_a4 = M2C_FIELD(arg0, u8 *, 0xC);
        var_a7 = 0;
        if (((s32) temp_a4 > 0) && ((s32) temp_a4 < 4)) {
            if ((M2C_FIELD(arg0, u8 *, 0xE) == 0) || (arg1 == 1)) {
                var_a7 = 1;
            }
        } else if (((s32) temp_a4 >= 5) && ((s32) temp_a4 < 8)) {
            if (M2C_FIELD(arg0, u8 *, 0xF) != 0) {
                if (arg1 == 1) {
                    goto block_15;
                }
            } else {
block_15:
                var_a7 = 1;
            }
        } else if (temp_a4 == 8) {
            var_a7 = 1;
        }
    } while (var_a7 == 1);
}
