/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_009BC8E0(void);
s32 func_009BA850(void) {
    s32 var_v0;
    u32 temp_v0;

    temp_v0 = func_009BC8E0();
    if (temp_v0 != 0) {
        var_v0 = 1;
        if (M2C_FIELD(temp_v0, u8 *, 0x740) != 1) {
            var_v0 = 0;
        }
        return var_v0;
    }
    return 1;
}
