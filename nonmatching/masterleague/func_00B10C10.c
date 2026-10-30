/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B15370(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00960FA0(M2C_UNK);                     /* extern */
M2C_UNK func_00B0ED30();                            /* extern */

s32 func_00B10C10(void) {
    u32 temp_v0;

    temp_v0 = func_00B15370();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, s16 *, 0xBFA) == 0) {
            func_00960FA0(1);
            func_00B0ED30();
            func_0026E840(0x84008401);
        }
    }
    return 0;
}
