/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B30A60(void);
s32 func_00B317D0(void) {
    s32 var_v0;
    u32 temp_v0;

    temp_v0 = func_00B30A60();
    if (temp_v0 == 0) {
        goto block_3;
    }
    var_v0 = 1;
    if (M2C_FIELD(temp_v0, u8 *, 0xF1) != 1) {
block_3:
        var_v0 = 0;
    }
    return var_v0;
}
