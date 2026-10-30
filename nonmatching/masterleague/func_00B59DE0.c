/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B59340(void);
s8 func_00B59DE0(s8 arg0, s32 arg1) {
    s32 var_v1;
    s8 var_s0;
    u32 temp_v0;

    var_s0 = arg0;
    temp_v0 = func_00B59340();
    if (temp_v0 == 0) {
        return 8;
    }
    if (arg1 < 0) {
        if (((var_s0 & 0xFF) + arg1) >= 0) {
            var_v1 = var_s0 + (arg1 & 0xFF);
            goto block_14;
        }
        var_s0 = 8;
    } else if (arg1 > 0) {
        if (((var_s0 & 0xFF) + arg1) < 9) {
            var_v1 = var_s0 + (arg1 & 0xFF);
block_14:
            var_s0 = var_v1 & 0xFF;
        } else {
            var_s0 = 0;
        }
    }
    M2C_FIELD(temp_v0, s8 *, 0x8C) = var_s0;
    return var_s0;
}
