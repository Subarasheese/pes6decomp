/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C4730(void *, s32, u32);            /* extern */
M2C_UNK func_00872B00(void *, void *);              /* extern */

void func_00873BB0(void *arg0, s32 arg1, u32 arg2) {
    s32 var_a1;
    u32 temp_v0;
    u32 temp_v0_2;
    u32 temp_v1;
    u32 var_s0;

    temp_v0 = M2C_FIELD(arg0, u32 *, 0x10);
    temp_v1 = arg2 * 8;
    temp_v0_2 = temp_v0 + temp_v1;
    M2C_FIELD(arg0, u32 *, 0x10) = temp_v0_2;
    var_a1 = (temp_v0 >> 3) & 0x3F;
    if (temp_v0_2 < temp_v1) {
        M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(arg0, s32 *, 0x14) + 1);
    }
    var_s0 = 0x40 - var_a1;
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(arg0, s32 *, 0x14) + (arg2 >> 0x1D));
    if (arg2 < var_s0) {
        var_s0 = 0;
    } else {
        func_001C4730(arg0 + var_a1 + 0x18, arg1, var_s0);
        func_00872B00(arg0, arg0 + 0x18);
loop_7:
        if ((u32) (var_s0 + 0x3F) < arg2) {
            func_00872B00(arg0, arg1 + var_s0);
            var_s0 += 0x40;
            goto loop_7;
        }
        var_a1 = 0;
    }
    func_001C4730(arg0 + var_a1 + 0x18, arg1 + var_s0, arg2 - var_s0);
}
