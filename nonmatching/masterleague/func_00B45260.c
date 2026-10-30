/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B45600(void);
M2C_UNK func_0026E840(M2C_UNK, void *, s32, u8, u8, void *, M2C_UNK, M2C_UNK); /* extern */

void func_00B45260(s32 arg0) {
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_a4_2;
    s32 var_a7;
    s32 var_v1;
    u32 temp_v0;
    u8 temp_a0;
    u8 temp_a0_3;
    u8 temp_a0_5;
    u8 temp_a1;
    u8 temp_a3_2;
    u8 temp_a4;
    u8 temp_v1;
    void *temp_a0_2;
    void *temp_a0_4;
    void *temp_a0_6;
    void *temp_a5;

    temp_v0 = func_00B45600();
    if ((temp_v0 != 0) && (temp_v1 = M2C_FIELD(temp_v0, u8 *, 0x3B6), (temp_v1 != 1))) {
        temp_a5 = temp_v1 + temp_v0;
        var_a7 = 0;
        var_v1 = 0;
        temp_a4 = (M2C_FIELD(temp_a5, u8 *, 0x7C0) - 1) & 0xFF;
        if (M2C_FIELD(temp_v0, u8 *, 0x3B5) != 0) {
            return;
        }
        if (arg0 < 0) {
            if (M2C_FIELD(temp_v0, u8 *, 0x8FD) != 0) {
                temp_a0 = M2C_FIELD(temp_a5, u8 *, 0x7D0);
                if ((s32) temp_a0 > 0) {
                    temp_a3 = arg0 & 0xFF;
                    M2C_FIELD(temp_a5, u8 *, 0x7D0) = (u8) (temp_a0 + temp_a3);
                    temp_a0_2 = M2C_FIELD(temp_v0, u8 *, 0x3B6) + temp_v0;
                    temp_a0_3 = M2C_FIELD(temp_a0_2, u8 *, 0x7C2);
                    if ((s32) M2C_FIELD(temp_a0_2, u8 *, 0x7D0) >= (s32) temp_a0_3) {
                        var_a7 = 1;
                    } else {
                        var_v1 = -arg0;
                        M2C_FIELD(temp_a0_2, u8 *, 0x7C2) = (u8) (temp_a0_3 + temp_a3);
                        var_a7 = 1;
                    }
                }
            } else {
                M2C_FIELD(temp_a5, u8 *, 0x7D0) = (u8) (M2C_FIELD(temp_a5, u8 *, 0x7C2) + 5);
                temp_a0_4 = M2C_FIELD(temp_v0, u8 *, 0x3B6) + temp_v0;
                if ((temp_a4 & 0xFF) >= (s32) M2C_FIELD(temp_a0_4, u8 *, 0x7D0)) {
                    var_a7 = 1;
                } else {
                    M2C_FIELD(temp_a0_4, u8 *, 0x7D0) = temp_a4;
                    var_a7 = 1;
                }
            }
            goto block_28;
        }
        if (arg0 > 0) {
            temp_a3_2 = M2C_FIELD(temp_v0, u8 *, 0x8FD);
            if (temp_a3_2 != 0) {
                temp_a0_5 = M2C_FIELD(temp_a5, u8 *, 0x7D0);
                temp_a2 = temp_a4 & 0xFF;
                if (temp_a0_5 == temp_a2) {
                    M2C_FIELD(temp_v0, u8 *, 0x3B5) = 3U;
                    func_0026E840(0x8400F802, temp_a5 + 0x7D0, temp_a2, temp_a3_2, temp_a4, temp_a5, 1, 0);
                    return;
                }
                if (((s32) temp_a0_5 < temp_a2) && (temp_a3_2 == 1)) {
                    temp_a4_2 = arg0 & 0xFF;
                    M2C_FIELD(temp_a5, u8 *, 0x7D0) = (u8) (temp_a0_5 + temp_a4_2);
                    temp_a0_6 = M2C_FIELD(temp_v0, u8 *, 0x3B6) + temp_v0;
                    temp_a1 = M2C_FIELD(temp_a0_6, u8 *, 0x7C2);
                    if ((temp_a1 + 5) >= (s32) M2C_FIELD(temp_a0_6, u8 *, 0x7D0)) {
                        var_a7 = 1;
                    } else {
                        var_v1 = -arg0;
                        M2C_FIELD(temp_a0_6, u8 *, 0x7C2) = (u8) (temp_a1 + temp_a4_2);
                        var_a7 = 1;
                    }
                } else {
                    M2C_FIELD(temp_a5, u8 *, 0x7D0) = temp_a4;
                }
                goto block_28;
            }
        } else {
block_28:
            if (var_v1 == 0) {
                if ((var_a7 & 0xFF) == 1) {
                    M2C_FIELD(temp_v0, u8 *, 0x3B5) = 2U;
                }
            } else {
                M2C_FIELD(temp_v0, s16 *, 0x7CC) = (s16) M2C_FIELD(temp_v0, s16 *, 0x7C4);
                M2C_FIELD(temp_v0, s16 *, 0x7CE) = -8;
                M2C_FIELD(temp_v0, s32 *, 0x7C8) = var_v1;
                M2C_FIELD(temp_v0, u8 *, 0x3B5) = 4U;
            }
        }
    }
}
