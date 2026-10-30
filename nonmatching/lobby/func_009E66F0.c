/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_009E66F0(s32 arg0, void *arg1) {
    s32 temp_a0;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a3;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_a3;
    s32 var_v0;
    s32 var_v1;

    temp_v1 = M2C_FIELD(arg1, s32 *, 0x40);
    temp_a3 = (arg0 & 0x400) != 0;
    if (temp_v1 > 0) {
        temp_a2 = M2C_FIELD(arg1, s32 *, 0x3C);
        var_v0 = 0;
        if ((temp_a2 >= 2) && (temp_v1 > 0)) {
            if (temp_a3 != 0) {
                var_a0 = 1;
            } else {
                var_a0 = -1;
            }
            var_v0 = 1;
            M2C_FIELD(arg1, s32 *, 0x40) = (s32) (((s32) (var_a0 + (temp_v1 - 1 + temp_a2)) % temp_a2) + 1);
        }
    } else {
        temp_a0 = M2C_FIELD(arg1, s32 *, 0xC);
        temp_a2_2 = M2C_FIELD(arg1, s32 *, 0x2C);
        var_v0 = 0;
        if (temp_a3 != 0) {
            var_v1 = -0x64;
        } else {
            var_v1 = 0x64;
        }
        var_a3 = temp_a2_2 + var_v1;
        if (temp_a0 < 0x64) {
            var_a3 = 0;
        } else if (var_a3 >= temp_a0) {
            var_a3 = 0;
        } else if (var_a3 < 0) {
            var_a3 = temp_a0 - 1;
        }
        temp_v1_2 = ((var_a3 / 100) + ((u32) var_a3 >> 0x1F)) * 0x64;
        M2C_FIELD(arg1, s32 *, 0x2C) = temp_v1_2;
        if (temp_v1_2 != temp_a2_2) {
            var_v0 = 1;
        }
    }
    if (var_v0 == 1) {
        M2C_FIELD(arg1, s32 *, 0x38) = 0;
    }
}
