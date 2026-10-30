/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B3070(u16, u16);                        /* extern */
u16 func_009B3480(u8 *, s32, u16, u8 *, f32, f32);  /* extern */
s32 func_00BBB990(s32, M2C_UNK);                    /* extern */
s32 func_00BBB9C0(s32, M2C_UNK);                    /* extern */

void func_00B3A430(u8 **arg0, u8 **arg1) {
    s32 temp_a1;
    s32 temp_a2_2;
    s32 temp_a3_2;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_s3;
    s32 temp_v0;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_s2;
    s32 var_v0;
    u16 temp_a2;
    u8 *temp_a0;
    u8 *temp_a3;
    u8 *temp_s0;
    u8 *temp_v1;

    temp_v1 = *arg1;
    temp_a3 = *arg0;
    temp_s1 = func_009B3070(M2C_FIELD(temp_v1, u16 *, 0x26), M2C_FIELD(((**arg0 * 2) + temp_v1), u16 *, 0x128)) & 0xFFFF;
    temp_s0 = *arg1;
    temp_a2 = M2C_FIELD(((M2C_FIELD(temp_a3, u8 *, 0) * 2) + temp_s0), u16 *, 0x128);
    temp_a1 = temp_a2 - M2C_FIELD(temp_s0, u16 *, 0x26);
    temp_s3 = ((temp_a1 + 0x10000) & 0xFFFF) < 0x8001;
    temp_a3_2 = func_009B3480(temp_s0, temp_a1, temp_a2, temp_a3, M2C_FIELD(temp_a3, f32 *, 0x6C), M2C_FIELD(temp_a3, f32 *, 0x70)) & 0xFFFF;
    temp_a0 = *arg0;
    temp_a2_2 = ((temp_a3_2 - M2C_FIELD(temp_s0, u16 *, 0x26)) + 0x10000) & 0xFFFF;
    var_s2 = temp_a2_2 < 0x8001;
    if ((u32) M2C_FIELD(((M2C_FIELD(temp_a0, u8 *, 0) * 4) + temp_s0), u32 *, 0x158) < 0x900001U) {
        temp_v1_2 = temp_s1 & 0xFFFF;
        if (temp_v1_2 >= 0x3000) {
            if (temp_v1_2 < 0x5000) {
                if (var_s2 != temp_s3) {
                    var_s2 = temp_s3;
                }
                goto block_5;
            }
            if ((func_009B3070(M2C_FIELD(*arg1, u16 *, 0x26), func_009B3480(temp_a0, 0x8001, (u16) temp_a2_2, (u8 *) temp_a3_2, M2C_FIELD(temp_a0, f32 *, 0x6C), M2C_FIELD(temp_a0, f32 *, 0x70))) & 0xFFFF) < 0x4001) {
                if (var_s2 == temp_s3) {
                    goto block_5;
                }
                var_v0 = 0x4000;
                goto block_6;
            }
        } else {
            if (var_s2 == temp_s3) {
block_5:
                var_v0 = 0x2000;
            } else {
                var_v0 = 0;
            }
block_6:
            if (var_s2 == 0) {
                var_v0 = (0x10000 - (var_v0 & 0xFFFF)) & 0xFFFF;
            }
            temp_v1_3 = M2C_FIELD(*arg1, u16 *, 0x26) + (var_v0 & 0xFFFF);
            temp_v0 = temp_v1_3 & 0xFFFF;
            if ((temp_v1_3 < 0) && (temp_v0 != 0)) {

            }
            temp_s0_2 = temp_v0 & 0xFFFF;
            M2C_FIELD(*arg0, f32 *, 0x6C) = (f32) (M2C_FIELD(*arg1, f32 *, 0xE0) + (f32) func_00BBB990(temp_s0_2, 0xC00));
            M2C_FIELD(*arg0, f32 *, 0x70) = (f32) (M2C_FIELD(*arg1, f32 *, 0xE8) + (f32) func_00BBB9C0(temp_s0_2, 0xC00));
        }
    }
}
