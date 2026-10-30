/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_002C6980(void *arg0, s32 *arg1) {
    s32 temp_v0;
    s32 var_a2;

    temp_v0 = ((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x24) << 0x38) >> 0x3A) + 0x8F;
    var_a2 = temp_v0 >> 1;
    if (temp_v0 < 0) {
        var_a2 = (s32) (temp_v0 + 1) >> 1;
    }
    *arg1 += 0xC8;
    return var_a2 + (M2C_FIELD(arg0, u8 *, 0x16) & 0x7F) + 1;
}
