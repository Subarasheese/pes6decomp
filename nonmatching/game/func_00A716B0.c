/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00A427F0(M2C_UNK);                         /* extern */

s32 func_00A716B0(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x4C) != 8) {
        goto block_1;
    }
    if ((func_00A427F0(1) != 0) && ((s32) M2C_FIELD(arg0, u8 *, 0x4D) < 0x80)) {
        return 1;
    }
block_1:
    return 0;
}
