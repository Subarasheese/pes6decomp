/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B5F200(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00958000(M2C_UNK);                     /* extern */
M2C_UNK func_00B5FA10(M2C_UNK);                     /* extern */

s32 func_00B5F900(void) {
    u32 temp_v0;

    temp_v0 = func_00B5F200();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0x92C) != 0) {
            if (M2C_FIELD(temp_v0, u8 *, 0x92D) != 1) {
                M2C_FIELD(temp_v0, s8 *, 0x8B0) = 4;
            } else {
                func_00B5FA10(0);
                M2C_FIELD(temp_v0, u8 *, 0x92D) = 0U;
                M2C_FIELD(temp_v0, s8 *, 0x8B0) = 0;
                func_00958000(0xB);
            }
            func_0026E840(0x84008401);
        } else {
            M2C_FIELD(temp_v0, u8 *, 0x92D) = 0U;
            M2C_FIELD(temp_v0, s8 *, 0x8B0) = 0;
            M2C_FIELD(temp_v0, u8 *, 0x92C) = 1U;
            func_00B5FA10(0);
            func_00958000(0xB);
            func_0026E840(0x84008401);
        }
    }
    return 0;
}
