/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_009AB630(void);
M2C_UNK func_009A9900(u8, u8);                      /* extern */
M2C_UNK func_009A9B50(s32, s16, s64);               /* extern */
M2C_UNK func_009AA5F0(u8, u8);                      /* extern */

void func_009AB240(s32 arg0) {
    s16 temp_a1;
    u32 temp_v0;
    u8 temp_a0;
    u8 temp_a0_2;
    u8 temp_v1;
    u8 temp_v1_2;
    u8 temp_v1_3;
    u8 var_v0;

    temp_v0 = func_009AB630();
    if (temp_v0 != 0) {
        temp_v1 = M2C_FIELD(temp_v0, u8 *, 0x569);
        if ((s32) temp_v1 >= 2) {
            var_v0 = (temp_v1 - 1) & 0xFF;
            if (arg0 < 0) {
                temp_v1_2 = M2C_FIELD(temp_v0, u8 *, 0x7B4);
                if ((s32) temp_v1_2 > 0) {
                    var_v0 = temp_v1_2 + (arg0 & 0xFF);
                }
                goto block_10;
            }
            if (arg0 > 0) {
                temp_v1_3 = M2C_FIELD(temp_v0, u8 *, 0x7B4);
                if ((s32) temp_v1_3 >= (var_v0 & 0xFF)) {
                    M2C_FIELD(temp_v0, u8 *, 0x7B4) = 0U;
                } else {
                    var_v0 = temp_v1_3 + (arg0 & 0xFF);
block_10:
                    M2C_FIELD(temp_v0, u8 *, 0x7B4) = var_v0;
                }
            }
            temp_a0 = M2C_FIELD(temp_v0, u8 *, 0x7B4);
            func_009AA5F0(temp_a0, M2C_FIELD((temp_a0 + temp_v0), u8 *, 0x7B5));
            temp_a1 = M2C_FIELD(temp_v0, s16 *, 0x846);
            func_009A9B50(-(s32) M2C_FIELD((M2C_FIELD(temp_v0, u8 *, 0x7B4) + temp_v0), u8 *, 0x7FD), temp_a1, (s64) ((s64) -temp_a1 << 0x30) >> 0x30);
            temp_a0_2 = M2C_FIELD(temp_v0, u8 *, 0x7B4);
            func_009A9900(temp_a0_2, M2C_FIELD((temp_a0_2 + temp_v0), u8 *, 0x7B5));
            M2C_FIELD(temp_v0, s8 *, 0x5B2) = 1;
        }
    }
}
