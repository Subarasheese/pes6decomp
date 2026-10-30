/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B23A40(void);
M2C_UNK func_00B22CB0(M2C_UNK, M2C_UNK);            /* extern */

s32 func_00B22BF0(void) {
    u32 temp_v0;

    temp_v0 = func_00B23A40();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0xC59) == 0) {
            if (M2C_FIELD(temp_v0, u8 *, 0xC5A) == 0) {
                func_00B22CB0(0, 1);
            }
        }
    }
    return 0;
}
