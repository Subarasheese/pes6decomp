/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002AE670(s32);
s32 func_00AB4460(s32, u16, s32);                   /* extern */

s32 func_00A806A0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_a5;
    s32 temp_s0;
    s32 temp_s2;
    s32 temp_v1;
    u16 temp_a1;
    void *var_a0;

    var_a0 = arg0;
    temp_v1 = M2C_FIELD(var_a0, u8 *, 0x5C) * 0xC;
    if ((arg3 >= (0x1D00 - temp_v1)) && (arg4 >= 0x201)) {
        if (arg4 < 0x180) {
            if ((arg1 & 0xFFFF) >= 0x50) {
                return 2;
            }
            goto block_5;
        }
block_5:
        if ((arg4 < 0x600) && ((arg1 & 0xFFFF) >= 0x50) && ((arg2 & 0xFFFF) >= 0x51)) {
            return 4;
        }
        return 0;
    }
    if ((arg4 < 0x301) && ((temp_a5 = M2C_FIELD(var_a0, s32 *, 0x98), (temp_a5 != 1)) || (M2C_FIELD(var_a0, u16 *, 0x3A) != 2))) {
        temp_a1 = M2C_FIELD(var_a0, u16 *, 0x3A);
        if (temp_a1 == 4) {
            var_a0 = 0x1900 - temp_v1;
            if (arg3 < (s32) var_a0) {
                return 4;
            }
        }
        if ((temp_a5 != 1) && (arg4 < 0xC0)) {
            return 4;
        }
        temp_s0 = arg2 & 0xFFFF;
        if (((temp_s0 * 2) + 0x140) >= arg4) {
            if ((temp_a5 != 1) && (temp_a1 == 4)) {
                return 4;
            }
            goto block_21;
        }
block_21:
        if ((((temp_s0 * 4) + 0x180) >= arg4) && ((arg1 & 0xFFFF) >= 0x29)) {
            return 4;
        }
        if ((0x1300 - temp_v1) >= arg3) {
            return 4;
        }
        temp_s2 = func_00AB4460((s32) var_a0, temp_a1, temp_a5);
        if ((func_002AE670(0x20) >= temp_s2) && ((arg1 & 0xFFFF) >= 0x29) && (temp_s0 >= 0x30)) {
            return 4;
        }
        return 1;
    }
    return 2;
}
