/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern u8 D_003EA040;

s32 func_00370120(void *arg0) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 4);
    if ((temp_v1 != 3) && (temp_v1 != 2)) {
        goto block_5;
    }
    if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        D_003EA040 = M2C_FIELD(arg0, u8 *, 0xC);
        return 1;
    }
block_5:
    return 0;
}
