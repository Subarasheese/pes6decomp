/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B490A0(void);
void func_00B4A010(s32 arg0) {
    s32 temp_a2_2;
    s32 temp_a3;
    s32 var_a3;
    s32 var_v1;
    u32 temp_v0;
    u8 temp_a0;
    u8 temp_a0_2;
    u8 temp_a1;
    u8 temp_a1_2;
    u8 temp_a2;
    u8 var_v1_2;

    temp_v0 = func_00B490A0();
    if (temp_v0 != 0) {
        var_a3 = 0;
        var_v1 = 0;
        temp_a2 = (M2C_FIELD(temp_v0, u8 *, 0x520) - 1) & 0xFF;
        if (M2C_FIELD(temp_v0, u8 *, 0x318) != 0) {
            return;
        }
        if (arg0 < 0) {
            if ((M2C_FIELD(temp_v0, u8 *, 0x319) == 2) && (M2C_FIELD(temp_v0, s32 *, 0x5CC) == 1)) {
                M2C_FIELD(temp_v0, s32 *, 0x5CC) = 0;
                if ((temp_a2 & 0xFF) >= 6) {
                    M2C_FIELD(temp_v0, u8 *, 0x5B0) = (u8) (M2C_FIELD(temp_v0, u8 *, 0x5A2) + 5);
                } else {
                    M2C_FIELD(temp_v0, u8 *, 0x5B0) = temp_a2;
                }
                var_v1_2 = 2;
                goto block_35;
            }
            temp_a0 = M2C_FIELD(temp_v0, u8 *, 0x5B0);
            if ((s32) temp_a0 <= 0) {
                M2C_FIELD(temp_v0, u8 *, 0x5B0) = 0U;
            } else {
                temp_a2_2 = arg0 & 0xFF;
                M2C_FIELD(temp_v0, u8 *, 0x5B0) = (u8) (temp_a0 + temp_a2_2);
                temp_a0_2 = M2C_FIELD(temp_v0, u8 *, 0x5A2);
                if ((s32) M2C_FIELD(temp_v0, u8 *, 0x5B0) < (s32) temp_a0_2) {
                    var_v1 = -arg0;
                    M2C_FIELD(temp_v0, u8 *, 0x5A2) = (u8) (temp_a0_2 + temp_a2_2);
                    var_a3 = 1;
                } else {
                    goto block_24;
                }
            }
            goto block_25;
        }
        if (arg0 > 0) {
            if ((M2C_FIELD(temp_v0, u8 *, 0x319) == 2) && (M2C_FIELD(temp_v0, u8 *, 0x5B0) == (temp_a2 & 0xFF))) {
                M2C_FIELD(temp_v0, s32 *, 0x5CC) = 1;
            }
            temp_a1 = M2C_FIELD(temp_v0, u8 *, 0x5B0);
            if ((s32) temp_a1 >= (temp_a2 & 0xFF)) {
                M2C_FIELD(temp_v0, u8 *, 0x5B0) = temp_a2;
            } else {
                temp_a3 = arg0 & 0xFF;
                M2C_FIELD(temp_v0, u8 *, 0x5B0) = (u8) (temp_a1 + temp_a3);
                temp_a1_2 = M2C_FIELD(temp_v0, u8 *, 0x5A2);
                if ((temp_a1_2 + 5) < (s32) M2C_FIELD(temp_v0, u8 *, 0x5B0)) {
                    var_v1 = -arg0;
                    M2C_FIELD(temp_v0, u8 *, 0x5A2) = (u8) (temp_a1_2 + temp_a3);
                }
block_24:
                var_a3 = 1;
            }
        }
block_25:
        if (var_v1 == 0) {
            if ((var_a3 & 0xFF) != 1) {
                if (M2C_FIELD(temp_v0, s32 *, 0x5CC) == 1) {
                    var_v1_2 = 4;
                    goto block_35;
                }
            } else {
                var_v1_2 = 2;
block_35:
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
