/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00B43210(s32);
extern s32 func_00B445F0(s32, s32);
extern void *D_003EAE6C;

void func_00B432A0(void) {
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_s0_2;
    u16 *var_a0;
    u16 *var_a0_2;
    u16 *var_a1;
    u16 *var_a2;
    u16 temp_a0_2;
    u16 temp_a0_3;
    u16 temp_a0_4;
    u16 temp_a1_2;
    u16 temp_a1_3;
    u16 temp_s0;
    u8 temp_v1;
    u8 temp_v1_2;
    u8 temp_v1_3;
    void *temp_s1;

    temp_s1 = D_003EAE6C;
    if ((temp_s1 != NULL) && (temp_a1 = M2C_FIELD(temp_s1, s32 *, 0x614), (temp_a1 != 0))) {
        temp_a0 = M2C_FIELD(temp_s1, s32 *, 0x6B4);
        switch (temp_a0) {                          /* irregular */
        case 7:
            if (temp_a1 != 1) {
                temp_v1 = M2C_FIELD(temp_s1, u8 *, 0x60D);
                if ((s32) temp_v1 >= 0x10) {
                    var_a2 = temp_s1 + ((temp_v1 - 0x10) * 2) + 0x6A0;
                } else {
                    var_a2 = temp_s1 + (M2C_FIELD(temp_s1, u8 *, 0x612) << 5) + (temp_v1 * 2) + 0x620;
                }
                if (temp_a1 != 2) {
                    var_a1 = temp_s1 + ((M2C_FIELD(temp_s1, u8 *, 0x61C) - 0x10) * 2) + 0x6A0;
                } else {
                    var_a1 = temp_s1 + (M2C_FIELD(temp_s1, u8 *, 0x61B) << 5) + (M2C_FIELD(temp_s1, u8 *, 0x61C) * 2) + 0x620;
                }
                temp_a0_2 = *var_a2;
                *var_a2 = *var_a1;
                *var_a1 = temp_a0_2;
                M2C_FIELD(temp_s1, s32 *, 0x614) = 0;
            } else {
                temp_s0 = M2C_FIELD(temp_s1, u16 *, 0x618);
                if (func_00B43210((s32) temp_s0) != 1) {
                    temp_v1_2 = M2C_FIELD(temp_s1, u8 *, 0x60D);
                    if ((s32) temp_v1_2 >= 0x10) {
                        var_a0 = temp_s1 + ((temp_v1_2 - 0x10) * 2) + 0x6A0;
                    } else {
                        var_a0 = temp_s1 + (M2C_FIELD(temp_s1, u8 *, 0x612) << 5) + (temp_v1_2 * 2) + 0x620;
                    }
                    temp_a1_2 = *var_a0;
                    *var_a0 = temp_s0;
                    M2C_FIELD(temp_s1, s32 *, 0x614) = 0;
                    temp_a0_3 = M2C_FIELD(temp_s1, u16 *, 0x6B0);
                    if (temp_a0_3 != 0xFFFF) {
                        if ((temp_a1_2 & 0xFFFF) == temp_a0_3) {
                            M2C_FIELD(temp_s1, u16 *, 0x6B0) = temp_s0;
                            return;
                        }
                    } else {
                        M2C_FIELD(temp_s1, u16 *, 0x6B0) = temp_s0;
                        return;
                    }
                }
            }
            break;
        case 6:
            if ((temp_a1 != 1) && (temp_s0_2 = func_00B445F0((s32) M2C_FIELD(temp_s1, u8 *, 0x610), (s32) M2C_FIELD(temp_s1, u8 *, 0x60C)) & 0xFFFF, (func_00B43210(temp_s0_2) != 1))) {
                temp_v1_3 = M2C_FIELD(temp_s1, u8 *, 0x61C);
                if ((s32) temp_v1_3 >= 0x10) {
                    var_a0_2 = temp_s1 + ((temp_v1_3 - 0x10) * 2) + 0x6A0;
                } else {
                    var_a0_2 = temp_s1 + (M2C_FIELD(temp_s1, u8 *, 0x61B) << 5) + (temp_v1_3 * 2) + 0x620;
                }
                temp_a1_3 = *var_a0_2;
                *var_a0_2 = (u16) temp_s0_2;
                M2C_FIELD(temp_s1, s32 *, 0x614) = 0;
                temp_a0_4 = M2C_FIELD(temp_s1, u16 *, 0x6B0);
                if (temp_a0_4 != 0xFFFF) {
                    if ((temp_a1_3 & 0xFFFF) == temp_a0_4) {
                        M2C_FIELD(temp_s1, u16 *, 0x6B0) = (u16) temp_s0_2;
                        return;
                    }
                } else {
                    M2C_FIELD(temp_s1, u16 *, 0x6B0) = (u16) temp_s0_2;
                    return;
                }
            }
            break;
        }
    }
}
