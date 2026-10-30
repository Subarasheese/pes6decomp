/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00821AD0(void *arg0) {
    s32 var_v0;
    u8 temp_a1;

    temp_a1 = M2C_FIELD(arg0, u8 *, 0x29);
    if (M2C_FIELD(arg0, u8 *, 0x28) != (temp_a1 - 1)) {
        var_v0 = M2C_FIELD(arg0, s16 *, 0x2A) < (0x3E8 / (s32) temp_a1);
    } else {
        var_v0 = (M2C_FIELD(arg0, s16 *, 0x2C) + M2C_FIELD(arg0, s16 *, 0x2A)) < 0x3E8;
    }
    return var_v0 ^ 1;
}
