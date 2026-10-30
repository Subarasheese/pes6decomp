/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00AEAD70(void *arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg1 & 0x4000) {
        if ((M2C_FIELD(arg0, s32 *, 0x1C) == 0) || (M2C_FIELD(arg0, s32 *, 0x18) != 0x84008401)) {
            M2C_FIELD(arg0, s32 *, 0x18) = 0x84028400;
        }
        var_v0 = 1;
        M2C_FIELD(arg0, s32 *, 0x1C) = 1;
    }
    return var_v0;
}
