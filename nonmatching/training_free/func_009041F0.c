/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BBB780(s64);                             /* extern */

s32 func_009041F0(void *arg0) {
    u8 temp_v0;

    temp_v0 = M2C_FIELD(arg0, u8 *, 0x1CA);
    if ((s32) temp_v0 >= 2) {
        if (func_00BBB780((s64) ((temp_v0 + 0x14) << 0x30) >> 0x30) & 0xFF) {
            return 1;
        }
        goto block_3;
    }
block_3:
    return 0;
}
