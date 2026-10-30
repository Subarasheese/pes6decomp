/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B77020(void);
M2C_UNK func_00B727C0(u8);                          /* extern */

void func_00B73F70(s32 arg0) {
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

    temp_v0 = func_00B77020();
    if (temp_v0 != 0) {
        temp_v1 = M2C_FIELD(temp_v0, u8 *, 0x3D1);
        if ((s32) temp_v1 > 0) {
            if ((s32) M2C_FIELD(temp_v0, u8 *, 0x3D2) >= (s32) temp_v1) {
                M2C_FIELD(temp_v0, u8 *, 0x3D2) = (u8) (temp_v1 - 1);
            }
            var_s2 = 0;
            var_s1 = 0;
            temp_a0 = (M2C_FIELD(temp_v0, u8 *, 0x3D1) - 1) & 0xFF;
            if (arg0 < 0) {
                temp_v0_2 = M2C_FIELD(temp_v0, u8 *, 0x3D2);
                if ((s32) temp_v0_2 <= 0) {
                    M2C_FIELD(temp_v0, u8 *, 0x3D2) = 0U;
                } else {
                    temp_a0_2 = arg0 & 0xFF;
                    M2C_FIELD(temp_v0, u8 *, 0x3D2) = (u8) (temp_v0_2 + temp_a0_2);
                    temp_v0_3 = M2C_FIELD(temp_v0, u8 *, 0x3F3);
                    if ((s32) M2C_FIELD(temp_v0, u8 *, 0x3D2) < (s32) temp_v0_3) {
                        var_s1 = -arg0;
                        M2C_FIELD(temp_v0, u8 *, 0x3F3) = (u8) (temp_v0_3 + temp_a0_2);
                        var_s2 = 1;
                    } else {
                        goto block_16;
                    }
                }
            } else if (arg0 > 0) {
                temp_v1_2 = M2C_FIELD(temp_v0, u8 *, 0x3D2);
                if ((s32) temp_v1_2 >= (temp_a0 & 0xFF)) {
                    M2C_FIELD(temp_v0, u8 *, 0x3D2) = temp_a0;
                } else {
                    temp_a1 = arg0 & 0xFF;
                    M2C_FIELD(temp_v0, u8 *, 0x3D2) = (u8) (temp_v1_2 + temp_a1);
                    temp_v1_3 = M2C_FIELD(temp_v0, u8 *, 0x3F3);
                    if ((temp_v1_3 + 0xA) < (s32) M2C_FIELD(temp_v0, u8 *, 0x3D2)) {
                        var_s1 = -arg0;
                        M2C_FIELD(temp_v0, u8 *, 0x3F3) = (u8) (temp_v1_3 + temp_a1);
                    }
block_16:
                    var_s2 = 1;
                }
            }
            func_00B727C0(M2C_FIELD(temp_v0, u8 *, 0x3D2));
            if (var_s1 == 0) {
                if ((var_s2 & 0xFF) == 1) {
                    var_v1 = 6;
                    goto block_23;
                }
            } else {
                var_v1 = 7;
                M2C_FIELD(temp_v0, s16 *, 0x3FC) = (s16) M2C_FIELD(temp_v0, s16 *, 0x3F4);
                M2C_FIELD(temp_v0, s16 *, 0x3FE) = -8;
                M2C_FIELD(temp_v0, s32 *, 0x3F8) = var_s1;
block_23:
                M2C_FIELD(temp_v0, s8 *, 0x3CC) = var_v1;
            }
        }
    }
}
