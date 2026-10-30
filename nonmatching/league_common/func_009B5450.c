/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_009B7F90(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_009B3400();                            /* extern */

s32 func_009B5450(void) {
    u32 temp_v0;
    u8 temp_a0;
    u8 var_v1;

    temp_v0 = func_009B7F90();
    if (temp_v0 != 0) {
        temp_a0 = M2C_FIELD(temp_v0, u8 *, 0x410);
        if ((s32) temp_a0 > 0) {
            var_v1 = temp_a0 - 1;
            goto block_8;
        }
        if (temp_a0 == 0) {
            var_v1 = M2C_FIELD(temp_v0, u8 *, 0x411) - 1;
block_8:
            M2C_FIELD(temp_v0, u8 *, 0x410) = var_v1;
        }
        if (temp_a0 != M2C_FIELD(temp_v0, u8 *, 0x410)) {
            func_0026E840(0x8400F803);
            func_009B3400();
        }
    }
    return 0;
}
