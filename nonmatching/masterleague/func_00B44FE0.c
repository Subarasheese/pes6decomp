/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B45600(void);
void func_00B44FE0(s32 arg0) {
    u32 temp_v0;
    u8 temp_a0;
    u8 temp_a0_2;
    u8 temp_a1;
    u8 temp_v1;
    u8 var_v1;

    temp_v0 = func_00B45600();
    if ((temp_v0 != 0) && (temp_v1 = M2C_FIELD(temp_v0, u8 *, 0x3B9), (((s32) temp_v1 < 2) == 0))) {
        temp_a1 = (temp_v1 - 1) & 0xFF;
        if (M2C_FIELD(temp_v0, u8 *, 0x3B5) != 0) {
            return;
        }
        if (arg0 > 0) {
            temp_a0 = M2C_FIELD(temp_v0, u8 *, 0x3BA);
            if ((s32) temp_a0 >= (temp_a1 & 0xFF)) {
                M2C_FIELD(temp_v0, u8 *, 0x3BA) = 0U;
            } else {
                var_v1 = temp_a0 + (arg0 & 0xFF);
                goto block_14;
            }
        } else if (arg0 < 0) {
            temp_a0_2 = M2C_FIELD(temp_v0, u8 *, 0x3BA);
            if ((s32) temp_a0_2 <= 0) {
                M2C_FIELD(temp_v0, u8 *, 0x3BA) = temp_a1;
            } else {
                var_v1 = temp_a0_2 + (arg0 & 0xFF);
block_14:
                M2C_FIELD(temp_v0, u8 *, 0x3BA) = var_v1;
            }
        }
        M2C_FIELD(temp_v0, u8 *, 0x3B6) = (u8) M2C_FIELD((M2C_FIELD(temp_v0, u8 *, 0x3BA) + temp_v0), u8 *, 0x3B7);
        M2C_FIELD(temp_v0, u8 *, 0x3B5) = 1U;
    }
}
