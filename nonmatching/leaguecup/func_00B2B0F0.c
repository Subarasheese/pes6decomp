/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B2BF70(void);
M2C_UNK func_00B2B1B0(M2C_UNK, M2C_UNK);            /* extern */

s32 func_00B2B0F0(void) {
    u32 temp_v0;

    temp_v0 = func_00B2BF70();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0x137D) == 0) {
            if (M2C_FIELD(temp_v0, u8 *, 0x137E) == 0) {
                func_00B2B1B0(0, 1);
            }
        }
    }
    return 0;
}
