/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_002889E0(void *);                      /* extern */
M2C_UNK func_00289040(void *, s32, s32, u8, s32, u8); /* extern */
M2C_UNK func_00289D30(void *, s32);                 /* extern */

void func_002886B0(void *arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4, s32 arg5, u8 arg6) {
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a1_4;
    s32 temp_a1_5;
    s32 temp_a1_6;
    s32 temp_a1_7;
    s32 temp_a5;
    s32 temp_a5_2;
    s32 temp_a5_3;
    s32 temp_a5_4;
    s32 temp_a5_5;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a3;
    s32 var_a5;
    s32 var_v0;
    u8 temp_a3;
    u8 temp_a6;
    u8 temp_a6_2;
    u8 temp_a6_3;
    u8 temp_a6_4;
    u8 temp_a6_5;
    u8 var_a4;
    u8 var_a6;

    var_a3 = arg3;
    var_a4 = arg4;
    var_a5 = arg5;
    var_a6 = arg6;
    temp_s1 = var_a3;
    temp_s0 = var_a5;
    if (var_a4 != 0) {
        temp_a3 = M2C_FIELD(arg0, u8 *, 5);
        temp_a1 = temp_a3 & 0x7F;
        M2C_FIELD(arg0, u8 *, 5) = (u8) ((temp_a3 & ~0x7F) | ((temp_a1 - ((((temp_a1 * 0x3C) / 1000) + ((u32) (temp_a1 * 0x3C) >> 0x1F)) & 0xFF)) & 0x7F));
        temp_v1 = M2C_FIELD(arg0, u8 *, 0x1A) & 0x7F;
        if (temp_v1 < 0x32) {
            var_v0 = 0x64;
        } else {
            var_v0 = (0x64 - ((temp_v1 - 0x32) * 2)) & 0xFF;
        }
        temp_a6 = M2C_FIELD(arg0, u8 *, 0xC);
        temp_a0 = var_v0 & 0xFF;
        temp_a5 = temp_a6 & 0x7F;
        temp_v0 = temp_a5 * 0x60;
        M2C_FIELD(arg0, u8 *, 0xC) = (u8) ((temp_a6 & ~0x7F) | ((temp_a5 - ((((temp_a0 * temp_v0) / 100000) + ((u32) (temp_a0 * temp_v0) >> 0x1F)) & 0xFF)) & 0x7F));
        temp_a6_2 = M2C_FIELD(arg0, u8 *, 0xE);
        temp_a5_2 = temp_a6_2 & 0x7F;
        temp_a1_2 = temp_a5_2 * 0x60;
        M2C_FIELD(arg0, u8 *, 0xE) = (u8) ((temp_a6_2 & ~0x7F) | ((temp_a5_2 - ((((temp_a0 * temp_a1_2) / 100000) + ((u32) (temp_a0 * temp_a1_2) >> 0x1F)) & 0xFF)) & 0x7F));
        temp_a6_3 = M2C_FIELD(arg0, u8 *, 0x10);
        temp_a5_3 = temp_a6_3 & 0x7F;
        temp_a1_3 = temp_a5_3 * 0x60;
        M2C_FIELD(arg0, u8 *, 0x10) = (u8) ((temp_a6_3 & ~0x7F) | ((temp_a5_3 - ((((temp_a0 * temp_a1_3) / 100000) + ((u32) (temp_a0 * temp_a1_3) >> 0x1F)) & 0xFF)) & 0x7F));
        temp_a6_4 = M2C_FIELD(arg0, u8 *, 0x12);
        temp_a5_4 = temp_a6_4 & 0x7F;
        temp_a1_4 = temp_a5_4 * 0x60;
        M2C_FIELD(arg0, u8 *, 0x12) = (u8) ((temp_a6_4 & ~0x7F) | ((temp_a5_4 - ((((temp_a0 * temp_a1_4) / 100000) + ((u32) (temp_a0 * temp_a1_4) >> 0x1F)) & 0xFF)) & 0x7F));
        temp_a6_5 = M2C_FIELD(arg0, u8 *, 0x15);
        temp_a5_5 = temp_a6_5 & 0x7F;
        temp_a1_5 = temp_a5_5 * 0x60;
        M2C_FIELD(arg0, u8 *, 0x15) = (u8) ((temp_a6_5 & ~0x7F) | ((temp_a5_5 - ((((temp_a0 * temp_a1_5) / 100000) + ((u32) (temp_a0 * temp_a1_5) >> 0x1F)) & 0xFF)) & 0x7F));
        var_a6 = M2C_FIELD(arg0, u8 *, 0x18);
        var_a5 = var_a6 & 0x7F;
        temp_a1_6 = var_a5 * 0x78;
        M2C_FIELD(arg0, u8 *, 0x18) = (u8) ((var_a6 & ~0x7F) | ((var_a5 - ((((temp_a0 * temp_a1_6) / 100000) + ((u32) (temp_a0 * temp_a1_6) >> 0x1F)) & 0xFF)) & 0x7F));
        var_a4 = M2C_FIELD(arg0, u8 *, 0x13);
        var_a3 = var_a4 & 0x7F;
        temp_a1_7 = var_a3 * 0x78;
        M2C_FIELD(arg0, u8 *, 0x13) = (u8) ((var_a4 & ~0x7F) | ((var_a3 - ((((temp_a0 * temp_a1_7) / 100000) + ((u32) (temp_a0 * temp_a1_7) >> 0x1F)) & 0xFF)) & 0x7F));
    }
    if (arg2 > 0) {
        func_00289040(arg0, arg2, var_a3, var_a4, var_a5, var_a6);
    }
    if (temp_s1 != 0) {
        func_002889E0(arg0);
    }
    func_00289D30(arg0, arg1);
    if (temp_s0 != 0) {
        M2C_FIELD(arg0, u8 *, 0x1A) = (u8) ((M2C_FIELD(arg0, u8 *, 0x1A) & ~0x7F) | 0x63);
        M2C_FIELD(arg0, u8 *, 0x19) = (u8) ((M2C_FIELD(arg0, u8 *, 0x19) & ~0x7F) | 0x63);
    }
}
