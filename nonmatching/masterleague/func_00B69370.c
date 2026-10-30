/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B694C0(s32, s32);                        /* extern */
extern void *D_003EAEE8;

void func_00B69370(s32 arg0, s32 arg1, s32 arg2) {
    s16 temp_a0_3;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 var_a0;
    void *temp_s0;
    void *temp_s1;
    void *temp_v1;

    if ((arg1 < 0x17) && (temp_a0 = arg0 & 0xFF, ((temp_a0 < 0x20) != 0)) && (temp_s1 = D_003EAEE8, (temp_s1 != NULL)) && (temp_s0 = (arg1 * 0x10) + (temp_s1 + (temp_a0 * 0x198)) + 0x10, temp_a0_2 = func_00B694C0(arg1, temp_a0 * 0x11) & 0xFF, ((temp_a0_2 < 0x17) != 0))) {
        temp_v1 = temp_s1 + (temp_a0_2 * 0x24) + 0x3318;
        if (arg2 == 0) {
            M2C_FIELD(temp_v1, s16 *, 0x14) = (s16) M2C_FIELD(temp_s0, s16 *, 4);
            M2C_FIELD(temp_v1, s16 *, 0x16) = (s16) (M2C_FIELD(temp_s0, s16 *, 8) - ((M2C_FIELD(temp_s0, s16 *, 4) / 100) + ((u32) M2C_FIELD(temp_s0, s16 *, 4) >> 0x1F)));
            M2C_FIELD(temp_v1, s16 *, 0x18) = 0;
            if (M2C_FIELD(temp_s1, s32 *, 0x3668) != 2) {
                temp_a0_3 = M2C_FIELD(temp_s0, s16 *, 0);
                if (temp_a0_3 < 0) {
                    var_a0 = -1;
                    goto block_12;
                }
                if (temp_a0_3 <= 0) {
                    M2C_FIELD(temp_v1, s32 *, 0x1C) = 0;
                } else {
                    var_a0 = 1;
block_12:
                    M2C_FIELD(temp_v1, s32 *, 0x1C) = var_a0;
                }
                M2C_FIELD(temp_v1, s32 *, 0x20) = 8;
            }
        } else {
            M2C_FIELD(temp_v1, s16 *, 0x14) = (s16) M2C_FIELD(temp_s0, s16 *, 2);
            M2C_FIELD(temp_v1, s16 *, 0x16) = (s16) M2C_FIELD(temp_s0, s16 *, 6);
            M2C_FIELD(temp_v1, s16 *, 0x18) = (s16) M2C_FIELD(temp_s0, s16 *, 0);
            M2C_FIELD(temp_v1, s32 *, 0x1C) = 0;
            M2C_FIELD(temp_v1, s32 *, 0x20) = 0;
        }
    }
}
