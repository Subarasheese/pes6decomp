/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B1DE00(void);
s32 func_00B1D7E0(M2C_UNK, M2C_UNK);                /* extern */

s32 func_00B1D760(void) {
    u32 temp_v0;

    temp_v0 = func_00B1DE00();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0x91) == 0) {
            if (M2C_FIELD(temp_v0, s32 *, 0x94) != 0) {
                if (func_00B1D7E0(0, -1) == -1) {
                    M2C_FIELD(temp_v0, u8 *, 0x91) = 0U;
                } else {
                    M2C_FIELD(temp_v0, u8 *, 0x91) = 3U;
                }
            }
        }
    }
    return 0;
}
