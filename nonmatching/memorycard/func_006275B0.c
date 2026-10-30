/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_006247E0();                              /* extern */

s32 func_006275B0(s32 arg0, s32 arg1) {
    void *temp_v0;

    if (arg0 == 0) {
        goto block_13;
    }
    temp_v0 = func_006247E0();
    if (temp_v0 != NULL) {
        if (arg1 != 1) {
            if ((u16) M2C_FIELD(temp_v0, u16 *, 2) < 3U) {
                return 1;
            }
            goto block_13;
        }
        if ((u32) (M2C_FIELD(temp_v0, u16 *, 2) - 1) < 2U) {
            return 1;
        }
        goto block_13;
    }
block_13:
    return 0;
}
