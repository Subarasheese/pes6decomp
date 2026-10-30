/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_002C3B60(u32, s32);
M2C_UNK func_001C48E8(f32 *, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_002C4580(f32 *, s32);                  /* extern */
void *func_00C13280(s32);                           /* extern */
s32 func_00C132B0(s32);                             /* extern */
s32 func_00C59D90(s32);                             /* extern */

s32 func_00368BF0(s32 *arg0, s8 *arg1, s8 *arg2, s32 arg3, u32 arg4, s32 arg5) {
    f32 sp70;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a1;
    s8 var_v0;
    u32 temp_v0_3;
    u8 var_s3;

    temp_v0 = func_00C59D90(arg3);
    if (temp_v0 == -1) {
        temp_a0 = func_002C3B60(arg4, arg5) & 0xFF;
        var_v0 = 0xFF;
        var_s3 = 0x13;
        if (temp_a0 != 0xFF) {
            var_v0 = temp_a0 & 0x1F;
            *arg1 = (temp_a0 >> 5) & 1;
        } else {
            *arg1 = 0xFF;
        }
        *arg2 = var_v0;
        func_001C48E8(&sp70, 0, 0xC);
    } else {
        func_002C4580(&sp70, temp_v0);
        var_s3 = M2C_FIELD(func_00C13280(temp_v0), u8 *, 4);
        temp_v0_2 = func_00C132B0(temp_v0) & 0xFF;
        *arg1 = (temp_v0_2 >> 5) & 1;
        *arg2 = temp_v0_2 & 0x1F;
        if (M2C_FIELD(func_00C13280(temp_v0), u8 *, 5) & 4) {
            *arg0 |= 0x2000;
        }
    }
    temp_a0_2 = var_s3 & 0xFF;
    temp_v0_3 = temp_a0_2 - 2;
    var_a1 = 0;
    if ((temp_v0_3 < 0xCU) && ((1 << temp_v0_3) & 0xC03)) {
        var_a1 = 1;
    }
    if ((sp70 > 6937.0f) && (sp70 < 9497.0f) && (var_a1 != 0)) {
        *arg0 |= 0x40;
    }
    if ((sp70 < 6937.0f) && (var_a1 != 0)) {
        *arg0 |= 0x80;
    }
    if (var_a1 != 0) {
        *arg0 |= 0x400;
    }
    if ((temp_a0_2 == 0x10) || (temp_a0_2 == 0xB) || ((u32) (temp_a0_2 - 7) < 2U)) {
        *arg0 |= 0x800;
    }
    return 1;
}
