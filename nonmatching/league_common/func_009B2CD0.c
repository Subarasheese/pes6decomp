/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_009A8D80(void);
M2C_UNK func_009B11D0(u8, u8);                      /* extern */
M2C_UNK func_009B1450(s32, s16, s64);               /* extern */
M2C_UNK func_009B1E80(u8, u8);                      /* extern */

void func_009B2CD0(s32 arg0) {
    s16 temp_a1;
    u32 temp_v0;
    u8 temp_a0;
    u8 temp_a0_2;
    u8 temp_v1;
    u8 temp_v1_2;
    u8 temp_v1_3;
    u8 var_v0;
    void *temp_s0;

    temp_v0 = func_009A8D80();
    if (temp_v0 != 0) {
        temp_s0 = temp_v0 + (M2C_FIELD(temp_v0, u8 *, 0xC9C) * 0xDC) + 0x773;
        if (temp_s0 != NULL) {
            temp_v1 = M2C_FIELD(temp_s0, u8 *, 2);
            if ((s32) temp_v1 >= 2) {
                var_v0 = (temp_v1 - 1) & 0xFF;
                if (arg0 < 0) {
                    temp_v1_2 = M2C_FIELD(temp_s0, u8 *, 0x4B);
                    if ((s32) temp_v1_2 > 0) {
                        var_v0 = temp_v1_2 + (arg0 & 0xFF);
                    }
                    goto block_11;
                }
                if (arg0 > 0) {
                    temp_v1_3 = M2C_FIELD(temp_s0, u8 *, 0x4B);
                    if ((s32) temp_v1_3 >= (var_v0 & 0xFF)) {
                        M2C_FIELD(temp_s0, u8 *, 0x4B) = 0U;
                    } else {
                        var_v0 = temp_v1_3 + (arg0 & 0xFF);
block_11:
                        M2C_FIELD(temp_s0, u8 *, 0x4B) = var_v0;
                    }
                }
                temp_a0 = M2C_FIELD(temp_s0, u8 *, 0x4B);
                func_009B1E80(temp_a0, M2C_FIELD((temp_a0 + temp_s0), u8 *, 0x4C));
                temp_a1 = M2C_FIELD(temp_v0, s16 *, 0x770);
                func_009B1450(-(s32) M2C_FIELD((M2C_FIELD(temp_s0, u8 *, 0x4B) + temp_s0), u8 *, 0x94), temp_a1, (s64) ((s64) -temp_a1 << 0x30) >> 0x30);
                temp_a0_2 = M2C_FIELD(temp_s0, u8 *, 0x4B);
                func_009B11D0(temp_a0_2, M2C_FIELD((temp_a0_2 + temp_s0), u8 *, 0x4C));
                M2C_FIELD(temp_v0, s8 *, 0x772) = 1;
            }
        }
    }
}
