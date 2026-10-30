/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00AF3B30(void);
M2C_UNK func_00AF3EF0(M2C_UNK, M2C_UNK);            /* extern */

s32 func_00AF3E90(void) {
    u32 temp_v0;

    temp_v0 = func_00AF3B30();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0x8D) == 0) {
            func_00AF3EF0(0, -1);
            M2C_FIELD(temp_v0, u8 *, 0x8D) = 3U;
            return 0;
        }
        return 0;
    }
    return 0;
}
