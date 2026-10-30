/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B490A0(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00958000(M2C_UNK);                     /* extern */
M2C_UNK func_00B45EF0(M2C_UNK);                     /* extern */

s32 func_00B4A550(void) {
    u32 temp_v0;
    u8 temp_a0;

    temp_v0 = func_00B490A0();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0x318) == 0) {
            temp_a0 = M2C_FIELD(temp_v0, u8 *, 0x319);
            if (temp_a0 != 3) {
                if (M2C_FIELD(temp_v0, u8 *, 0x5C4) != 1) {
                    if (temp_a0 != 2) {
                        M2C_FIELD(temp_v0, u8 *, 0x318) = 6U;
                        func_00958000(0x47);
                        goto block_18;
                    }
                    goto block_16;
                }
block_16:
                M2C_FIELD(temp_v0, u8 *, 0x318) = 4U;
                return 0;
            }
            func_00B45EF0(0);
            M2C_FIELD(temp_v0, u8 *, 0x319) = (u8) M2C_FIELD(temp_v0, u8 *, 0x31A);
            M2C_FIELD(temp_v0, u8 *, 0x318) = 0U;
            func_00958000(0x5E);
            func_0026E840(0x84008401);
            goto block_18;
        }
        goto block_18;
    }
block_18:
    return 0;
}
