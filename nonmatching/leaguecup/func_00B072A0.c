/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B080B0(void);
s32 func_00B073E0(M2C_UNK, M2C_UNK);                /* extern */

s32 func_00B072A0(void) {
    u32 temp_v0;

    temp_v0 = func_00B080B0();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0xCE1) == 0) {
            if (M2C_FIELD(temp_v0, u8 *, 0xCE2) == 0) {
                if (func_00B073E0(-1, 0) == -1) {
                    M2C_FIELD(temp_v0, u8 *, 0xCE1) = 0U;
                } else {
                    M2C_FIELD(temp_v0, u8 *, 0xCE1) = 3U;
                }
            }
        }
    }
    return 0;
}
