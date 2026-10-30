/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B0A9F0(void);
void func_00B09B30(s32 arg0) {
    s32 temp_a0;
    s32 temp_a1_2;
    s32 temp_a2;
    s32 var_a2;
    s32 var_a3;
    s8 var_v1;
    u32 temp_v0;
    u8 temp_a0_2;
    u8 temp_a0_3;
    u8 temp_a1;
    u8 temp_v1;
    u8 temp_v1_2;

    temp_v0 = func_00B0A9F0();
    if (temp_v0 != 0) {
        temp_a0 = M2C_FIELD(temp_v0, s32 *, 0x5D0);
        if (temp_a0 > 0) {
            if ((s32) M2C_FIELD(temp_v0, u8 *, 0x3A4) >= temp_a0) {
                M2C_FIELD(temp_v0, u8 *, 0x3A4) = (u8) (temp_a0 - 1);
            }
            if (M2C_FIELD(temp_v0, u8 *, 0x5E0) != 1) {
                var_a2 = 0;
                var_a3 = 0;
                temp_a1 = (M2C_FIELD(temp_v0, s32 *, 0x5D0) - 1) & 0xFF;
                if (arg0 < 0) {
                    temp_v1 = M2C_FIELD(temp_v0, u8 *, 0x3A4);
                    if ((s32) temp_v1 <= 0) {
                        M2C_FIELD(temp_v0, u8 *, 0x3A4) = 0U;
                    } else {
                        temp_a1_2 = arg0 & 0xFF;
                        M2C_FIELD(temp_v0, u8 *, 0x3A4) = (u8) (temp_v1 + temp_a1_2);
                        temp_v1_2 = M2C_FIELD(temp_v0, u8 *, 0x5B8);
                        if ((s32) M2C_FIELD(temp_v0, u8 *, 0x3A4) < (s32) temp_v1_2) {
                            var_a3 = -arg0;
                            M2C_FIELD(temp_v0, u8 *, 0x5B8) = (u8) (temp_v1_2 + temp_a1_2);
                            var_a2 = 1;
                        } else {
                            goto block_17;
                        }
                    }
                } else if (arg0 > 0) {
                    temp_a0_2 = M2C_FIELD(temp_v0, u8 *, 0x3A4);
                    if ((s32) temp_a0_2 >= (temp_a1 & 0xFF)) {
                        M2C_FIELD(temp_v0, u8 *, 0x3A4) = temp_a1;
                    } else {
                        temp_a2 = arg0 & 0xFF;
                        M2C_FIELD(temp_v0, u8 *, 0x3A4) = (u8) (temp_a0_2 + temp_a2);
                        temp_a0_3 = M2C_FIELD(temp_v0, u8 *, 0x5B8);
                        if ((temp_a0_3 + 0xA) < (s32) M2C_FIELD(temp_v0, u8 *, 0x3A4)) {
                            var_a3 = -arg0;
                            M2C_FIELD(temp_v0, u8 *, 0x5B8) = (u8) (temp_a0_3 + temp_a2);
                        }
block_17:
                        var_a2 = 1;
                    }
                }
                if (var_a3 == 0) {
                    var_v1 = 1;
                    if ((var_a2 & 0xFF) == 1) {
                        goto block_23;
                    }
                } else {
                    var_v1 = 2;
                    M2C_FIELD(temp_v0, s16 *, 0x5BE) = (s16) M2C_FIELD(temp_v0, s16 *, 0x5BA);
                    M2C_FIELD(temp_v0, s16 *, 0x5BC) = -8;
                    M2C_FIELD(temp_v0, s32 *, 0x5C8) = var_a3;
block_23:
                    M2C_FIELD(temp_v0, s8 *, 0x5D8) = var_v1;
                }
            }
        }
    }
}
