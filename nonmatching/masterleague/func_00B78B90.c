/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B77B10(void);
void func_00B78B90(s32 arg0) {
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a3_2;
    s32 var_a4;
    s32 var_v1;
    u32 temp_v0;
    u8 temp_a0;
    u8 temp_a0_2;
    u8 temp_a0_3;
    u8 temp_a1_2;
    u8 temp_a3;
    u8 var_v1_2;

    temp_v0 = func_00B77B10();
    if (temp_v0 != 0) {
        var_a4 = 0;
        var_v1 = 0;
        temp_a3 = (M2C_FIELD(temp_v0, u8 *, 0x520) - 1) & 0xFF;
        if (M2C_FIELD(temp_v0, u8 *, 0x318) != 0) {
            return;
        }
        if (arg0 < 0) {
            if (M2C_FIELD(temp_v0, s32 *, 0x5C8) != 1) {
                temp_a0 = M2C_FIELD(temp_v0, u8 *, 0x5B0);
                if ((s32) temp_a0 > 0) {
                    temp_a2 = arg0 & 0xFF;
                    M2C_FIELD(temp_v0, u8 *, 0x5B0) = (u8) (temp_a0 + temp_a2);
                    temp_a0_2 = M2C_FIELD(temp_v0, u8 *, 0x5A2);
                    if ((s32) M2C_FIELD(temp_v0, u8 *, 0x5B0) >= (s32) temp_a0_2) {
                        var_a4 = 1;
                    } else {
                        var_v1 = -arg0;
                        M2C_FIELD(temp_v0, u8 *, 0x5A2) = (u8) (temp_a0_2 + temp_a2);
                        var_a4 = 1;
                    }
                } else if (temp_a0 != 0) {
                    M2C_FIELD(temp_v0, u8 *, 0x5B0) = 0U;
                } else {
                    M2C_FIELD(temp_v0, s32 *, 0x5C8) = 1;
                    M2C_FIELD(temp_v0, u8 *, 0x5B0) = 0U;
                }
                goto block_32;
            }
            M2C_FIELD(temp_v0, s32 *, 0x5C8) = 0;
            M2C_FIELD(temp_v0, u8 *, 0x5B0) = temp_a3;
            if ((temp_a3 & 0xFF) >= 6) {
                M2C_FIELD(temp_v0, u8 *, 0x5B0) = (u8) (M2C_FIELD(temp_v0, u8 *, 0x5A2) + 5);
            }
            var_v1_2 = 2;
            goto block_42;
        }
        if (arg0 > 0) {
            if (M2C_FIELD(temp_v0, s32 *, 0x5C8) != 1) {
                temp_a0_3 = M2C_FIELD(temp_v0, u8 *, 0x5B0);
                temp_a1 = temp_a3 & 0xFF;
                if ((s32) temp_a0_3 < temp_a1) {
                    temp_a3_2 = arg0 & 0xFF;
                    M2C_FIELD(temp_v0, u8 *, 0x5B0) = (u8) (temp_a0_3 + temp_a3_2);
                    temp_a1_2 = M2C_FIELD(temp_v0, u8 *, 0x5A2);
                    if ((temp_a1_2 + 5) >= (s32) M2C_FIELD(temp_v0, u8 *, 0x5B0)) {
                        var_a4 = 1;
                    } else {
                        var_v1 = -arg0;
                        M2C_FIELD(temp_v0, u8 *, 0x5A2) = (u8) (temp_a1_2 + temp_a3_2);
                        var_a4 = 1;
                    }
                } else {
                    if (temp_a0_3 == temp_a1) {
                        M2C_FIELD(temp_v0, s32 *, 0x5C8) = 1;
                    }
                    M2C_FIELD(temp_v0, u8 *, 0x5B0) = temp_a3;
                }
                goto block_32;
            }
            M2C_FIELD(temp_v0, s32 *, 0x5C8) = 0;
            var_v1_2 = 2;
            M2C_FIELD(temp_v0, u8 *, 0x5B0) = (u8) M2C_FIELD(temp_v0, u8 *, 0x5A2);
            goto block_42;
        }
block_32:
        if (var_v1 == 0) {
            if ((var_a4 & 0xFF) != 1) {
                if (M2C_FIELD(temp_v0, s32 *, 0x5C8) == 1) {
                    var_v1_2 = 4;
                    goto block_42;
                }
            } else {
                var_v1_2 = 2;
block_42:
                M2C_FIELD(temp_v0, u8 *, 0x318) = var_v1_2;
            }
        } else {
            M2C_FIELD(temp_v0, s16 *, 0x5AC) = (s16) M2C_FIELD(temp_v0, s16 *, 0x5A4);
            M2C_FIELD(temp_v0, s16 *, 0x5AE) = -0x10;
            M2C_FIELD(temp_v0, s32 *, 0x5A8) = var_v1;
            M2C_FIELD(temp_v0, u8 *, 0x318) = 3U;
        }
    }
}
