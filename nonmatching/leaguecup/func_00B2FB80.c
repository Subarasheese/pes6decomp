/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B30600(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */

s32 func_00B2FB80(void) {
    u32 temp_v0;

    temp_v0 = func_00B30600();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0x2B0E) == 0) {
            M2C_FIELD(temp_v0, s8 *, 0x2B0D) = 5;
            M2C_FIELD(temp_v0, s8 *, 0x2B0C) = 1;
            func_0026E840(0x84008401);
        } else {
            M2C_FIELD(temp_v0, s8 *, 0x2B0D) = 1;
            func_0026E840(0x84008401);
        }
    }
    return 0;
}
