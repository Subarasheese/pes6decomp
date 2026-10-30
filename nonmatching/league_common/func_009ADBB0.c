/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_009AE900(void);
M2C_UNK func_009AC5B0(u8, u8);                      /* extern */
M2C_UNK func_009AC800(s32, s16, s64);               /* extern */
M2C_UNK func_009AD220(u8, u8);                      /* extern */

void func_009ADBB0(s32 arg0) {
    s16 temp_a1;
    u32 temp_v0;
    u8 temp_a0;
    u8 temp_a0_2;
    u8 temp_a0_3;
    u8 temp_v1;
    u8 temp_v1_2;
    u8 temp_v1_3;
    u8 var_v0;

    temp_v0 = func_009AE900();
    if ((temp_v0 != 0) && (temp_v1 = M2C_FIELD(temp_v0, u8 *, 0x82D), (((s32) temp_v1 < 2) == 0))) {
        temp_a0 = (temp_v1 - 1) & 0xFF;
        if (M2C_FIELD(temp_v0, u8 *, 0x5E2) != 0) {
            return;
        }
        if (arg0 < 0) {
            temp_v1_2 = M2C_FIELD(temp_v0, u8 *, 0x7E4);
            if ((s32) temp_v1_2 <= 0) {
                M2C_FIELD(temp_v0, u8 *, 0x7E4) = temp_a0;
            } else {
                var_v0 = temp_v1_2 + (arg0 & 0xFF);
                goto block_14;
            }
        } else if (arg0 > 0) {
            temp_v1_3 = M2C_FIELD(temp_v0, u8 *, 0x7E4);
            if ((s32) temp_v1_3 >= (temp_a0 & 0xFF)) {
                M2C_FIELD(temp_v0, u8 *, 0x7E4) = 0U;
            } else {
                var_v0 = temp_v1_3 + (arg0 & 0xFF);
block_14:
                M2C_FIELD(temp_v0, u8 *, 0x7E4) = var_v0;
            }
        }
        temp_a0_2 = M2C_FIELD(temp_v0, u8 *, 0x7E4);
        func_009AD220(temp_a0_2, M2C_FIELD((temp_a0_2 + temp_v0), u8 *, 0x7E5));
        temp_a1 = M2C_FIELD(temp_v0, s16 *, 0x8BE);
        func_009AC800(-(s32) M2C_FIELD((M2C_FIELD(temp_v0, u8 *, 0x7E4) + temp_v0), u8 *, 0x876), temp_a1, (s64) ((s64) -temp_a1 << 0x30) >> 0x30);
        temp_a0_3 = M2C_FIELD(temp_v0, u8 *, 0x7E4);
        func_009AC5B0(temp_a0_3, M2C_FIELD((temp_a0_3 + temp_v0), u8 *, 0x7E5));
        M2C_FIELD(temp_v0, u8 *, 0x5E2) = 1U;
    }
}
