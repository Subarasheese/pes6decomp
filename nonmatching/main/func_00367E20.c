/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00367E20(void *arg0) {
    u8 var_v0;

    if (!(M2C_FIELD(arg0, s32 *, 0x2C) & 1)) {
        if (M2C_FIELD(arg0, s32 *, 0x14) != 3) {
            var_v0 = M2C_FIELD(arg0, u8 *, 0x38);
            goto block_16;
        }
        return 1;
    }
    if (M2C_FIELD(arg0, s32 *, 0xC) != 1) {
        if (M2C_FIELD(arg0, s32 *, 0x14) != 3) {
            var_v0 = (s32) M2C_FIELD(arg0, u8 *, 0x38) & 0x21F;
block_16:
            return var_v0 != 0;
        }
        return 1;
    }
    return 1;
}
