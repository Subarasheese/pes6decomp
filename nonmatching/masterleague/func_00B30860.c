/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B30940(void);
s32 func_00B30860(void) {
    s32 var_v0;
    u32 temp_v0;

    temp_v0 = func_00B30940();
    if (temp_v0 != 0) {
        var_v0 = 1;
        if (M2C_FIELD(temp_v0, s32 *, 0x9C) != 1) {
            var_v0 = 0;
        }
        return var_v0;
    }
    return 1;
}
