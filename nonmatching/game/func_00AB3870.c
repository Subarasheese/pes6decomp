/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00A1FE80(s32, s32);                        /* extern */

s32 func_00AB3870(void *arg0, s32 arg1, s32 arg2) {
    s32 var_a2;

    var_a2 = arg2;
    if (arg1 < 0x801) {
        if (arg1 >= 0x201) {
            var_a2 = func_00A1FE80(var_a2, 0x1900 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC));
        }
        return var_a2;
    }
    return M2C_FIELD(arg0, s32 *, 0x58);
}
