/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00161AF0(s8 **arg0, s32 arg1) {
    s8 *temp_v1;
    s8 *var_v1;

    temp_v1 = *arg0;
    var_v1 = temp_v1 - 1;
    if (arg1 == temp_v1) {
        return -1;
    }
loop_3:
    if ((*var_v1 < 0) && ((u32) (((u8) *var_v1 + 0x40) & 0xFF) >= 0x38U)) {
        if (arg1 != var_v1) {
            var_v1 -= 1;
            goto loop_3;
        }
    }
    *arg0 = var_v1;
    return 0;
}
