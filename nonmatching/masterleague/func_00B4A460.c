/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B490A0(void);
M2C_UNK func_00958000(M2C_UNK);                     /* extern */
M2C_UNK func_00B45CC0(u8);                          /* extern */

s32 func_00B4A460(void) {
    u32 temp_v0;
    u8 temp_a0;

    temp_v0 = func_00B490A0();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0x318) == 0) {
            if (((M2C_FIELD(temp_v0, u8 *, 0x5C4) == 1) && (M2C_FIELD(temp_v0, s32 *, 0x5CC) == 1)) || ((temp_a0 = M2C_FIELD(temp_v0, u8 *, 0x319), (temp_a0 == 2)) && (M2C_FIELD(temp_v0, s32 *, 0x5CC) == 1))) {
                M2C_FIELD(temp_v0, u8 *, 0x318) = 6U;
                return 0;
            }
            if (temp_a0 != 3) {
                M2C_FIELD(temp_v0, u8 *, 0x318) = 5U;
                M2C_FIELD(temp_v0, s8 *, 0x31B) = 1;
                func_00B45CC0(temp_a0);
                if (M2C_FIELD(temp_v0, u8 *, 0x5C4) != 1) {
                    if (M2C_FIELD(temp_v0, u8 *, 0x319) != 2) {
                        func_00958000(0x4D);
                    } else {
                        goto block_21;
                    }
                } else {
block_21:
                    func_00958000(0x5F);
                }
            }
            goto block_23;
        }
        goto block_23;
    }
block_23:
    return 0;
}
