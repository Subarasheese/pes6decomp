/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002886B0(void *, s32, s32, s32, u8, s32, u8);
s32 func_008BE070(void *arg0, s32 arg1, s32 arg2, void *arg3) {
    s32 temp_a1;
    s32 var_a2;
    s32 var_a6;
    s32 var_s0;
    u8 var_a5;
    void *temp_v0;
    void *temp_v0_2;

    temp_a1 = arg1 & 0xFF;
    temp_v0 = temp_a1 + arg0;
    var_a5 = M2C_FIELD(temp_v0, u8 *, 0xD3);
    var_s0 = 1;
    var_a6 = 0;
    if ((s32) var_a5 >= 0xB) {
        var_a5 = 2;
        var_s0 = 0;
    } else if ((s32) var_a5 >= 5) {
        var_a6 = 1;
        var_a5 = (u8) ((s32) var_a5 % 5);
    }
    temp_v0_2 = M2C_FIELD(arg0, s32 *, 0x2F4) + (temp_a1 * 0x2C);
    M2C_FIELD(arg3, f32 *, 0) = (f32) M2C_FIELD(temp_v0_2, f32 *, 0);
    M2C_FIELD(arg3, f32 *, 4) = (f32) M2C_FIELD(temp_v0_2, f32 *, 4);
    M2C_FIELD(arg3, f32 *, 8) = (f32) M2C_FIELD(temp_v0_2, f32 *, 8);
    M2C_FIELD(arg3, f32 *, 0xC) = (f32) M2C_FIELD(temp_v0_2, f32 *, 0xC);
    M2C_FIELD(arg3, f32 *, 0x10) = (f32) M2C_FIELD(temp_v0_2, f32 *, 0x10);
    M2C_FIELD(arg3, f32 *, 0x14) = (f32) M2C_FIELD(temp_v0_2, f32 *, 0x14);
    M2C_FIELD(arg3, f32 *, 0x18) = (f32) M2C_FIELD(temp_v0_2, f32 *, 0x18);
    M2C_FIELD(arg3, f32 *, 0x1C) = (f32) M2C_FIELD(temp_v0_2, f32 *, 0x1C);
    M2C_FIELD(arg3, f32 *, 0x20) = (f32) M2C_FIELD(temp_v0_2, f32 *, 0x20);
    M2C_FIELD(arg3, f32 *, 0x24) = (f32) M2C_FIELD(temp_v0_2, f32 *, 0x24);
    M2C_FIELD(arg3, f32 *, 0x28) = (f32) M2C_FIELD(temp_v0_2, f32 *, 0x28);
    if (arg2 == 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0xD3) == 0xA) {
            var_a2 = 1;
        } else {
            var_a2 = 0;
        }
        func_002886B0(arg3, var_a5 & 0xFF, var_a2, var_a6, 0U, 0, (u8) var_a6);
    }
    return var_s0;
}
