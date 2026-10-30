/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0016AA28(void *arg0) {
    s32 temp_a0;
    s32 var_v0;

    if (M2C_FIELD(arg0, u16 *, 0) == 0x11) {
        temp_a0 = M2C_FIELD(arg0, s32 *, 0x14);
        var_v0 = 0;
        if (temp_a0 < 6) {
            var_v0 = temp_a0 >= 4;
        }
        return var_v0;
    }
    return 0;
}
