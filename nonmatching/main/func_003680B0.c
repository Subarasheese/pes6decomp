/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_003680B0(void *arg0) {
    s32 var_v0;

    if (!(M2C_FIELD(arg0, s32 *, 0x2C) & 1)) {
        if (M2C_FIELD(arg0, s32 *, 0x14) != 3) {
            var_v0 = M2C_FIELD(arg0, s32 *, 0x34) & 0xB01DFF;
        } else {
            var_v0 = M2C_FIELD(arg0, s32 *, 0x34) & 0x06000000;
        }
        goto block_17;
    }
    if (M2C_FIELD(arg0, s32 *, 0xC) != 1) {
        if (M2C_FIELD(arg0, s32 *, 0x14) != 3) {
            var_v0 = M2C_FIELD(arg0, s32 *, 0x34) & 0x7DDFF;
        } else {
            var_v0 = M2C_FIELD(arg0, s32 *, 0x34) & 0x11800000;
        }
block_17:
        return var_v0 != 0;
    }
    return 1;
}
