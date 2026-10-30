/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B526C0(void);
M2C_UNK func_00B4F1C0(u8);                          /* extern */

void func_00B4ED70(s32 arg0) {
    s32 temp_a0_2;
    s32 temp_a1;
    s32 var_s1;
    s32 var_s2;
    s8 var_v1;
    u32 temp_v0;
    u8 temp_a0;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v1;
    u8 temp_v1_2;
    u8 temp_v1_3;

    temp_v0 = func_00B526C0();
    if (temp_v0 != 0) {
        temp_v1 = M2C_FIELD(temp_v0, u8 *, 0xD15);
        if ((s32) temp_v1 > 0) {
            if ((s32) M2C_FIELD(temp_v0, u8 *, 0xD16) >= (s32) temp_v1) {
                M2C_FIELD(temp_v0, u8 *, 0xD16) = (u8) (temp_v1 - 1);
            }
            var_s2 = 0;
            var_s1 = 0;
            temp_a0 = (M2C_FIELD(temp_v0, u8 *, 0xD15) - 1) & 0xFF;
            if (arg0 < 0) {
                temp_v0_2 = M2C_FIELD(temp_v0, u8 *, 0xD16);
                if ((s32) temp_v0_2 <= 0) {
                    M2C_FIELD(temp_v0, u8 *, 0xD16) = 0U;
                } else {
                    temp_a0_2 = arg0 & 0xFF;
                    M2C_FIELD(temp_v0, u8 *, 0xD16) = (u8) (temp_v0_2 + temp_a0_2);
                    temp_v0_3 = M2C_FIELD(temp_v0, u8 *, 0xD17);
                    if ((s32) M2C_FIELD(temp_v0, u8 *, 0xD16) < (s32) temp_v0_3) {
                        var_s1 = -arg0;
                        M2C_FIELD(temp_v0, u8 *, 0xD17) = (u8) (temp_v0_3 + temp_a0_2);
                        var_s2 = 1;
                    } else {
                        goto block_16;
                    }
                }
            } else if (arg0 > 0) {
                temp_v1_2 = M2C_FIELD(temp_v0, u8 *, 0xD16);
                if ((s32) temp_v1_2 >= (temp_a0 & 0xFF)) {
                    M2C_FIELD(temp_v0, u8 *, 0xD16) = temp_a0;
                } else {
                    temp_a1 = arg0 & 0xFF;
                    M2C_FIELD(temp_v0, u8 *, 0xD16) = (u8) (temp_v1_2 + temp_a1);
                    temp_v1_3 = M2C_FIELD(temp_v0, u8 *, 0xD17);
                    if ((temp_v1_3 + 0xD) < (s32) M2C_FIELD(temp_v0, u8 *, 0xD16)) {
                        var_s1 = -arg0;
                        M2C_FIELD(temp_v0, u8 *, 0xD17) = (u8) (temp_v1_3 + temp_a1);
                    }
block_16:
                    var_s2 = 1;
                }
            }
            func_00B4F1C0(M2C_FIELD(temp_v0, u8 *, 0xD16));
            if (var_s1 == 0) {
                if ((var_s2 & 0xFF) == 1) {
                    var_v1 = 6;
                    goto block_23;
                }
            } else {
                var_v1 = 7;
                M2C_FIELD(temp_v0, s16 *, 0xD20) = (s16) M2C_FIELD(temp_v0, s16 *, 0xD18);
                M2C_FIELD(temp_v0, s16 *, 0xD22) = -8;
                M2C_FIELD(temp_v0, s32 *, 0xD1C) = var_s1;
block_23:
                M2C_FIELD(temp_v0, s8 *, 0xD10) = var_v1;
            }
        }
    }
}
