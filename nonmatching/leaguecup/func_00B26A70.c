/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B279D0(void);
s32 func_00B26C30(M2C_UNK, M2C_UNK);                /* extern */

s32 func_00B26A70(void) {
    u32 temp_v0;

    temp_v0 = func_00B279D0();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0xD99) == 0) {
            if (M2C_FIELD(temp_v0, u8 *, 0xD9A) == 0) {
                if (func_00B26C30(1, 0) == -1) {
                    M2C_FIELD(temp_v0, u8 *, 0xD99) = 0U;
                } else {
                    M2C_FIELD(temp_v0, u8 *, 0xD99) = 3U;
                }
            }
        }
    }
    return 0;
}
