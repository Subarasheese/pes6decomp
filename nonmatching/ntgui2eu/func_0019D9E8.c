/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0019D9E8(s8 **arg0, s32 *arg1, s8 arg2) {
    s32 temp_v1;
    s8 *temp_a0;

    temp_v1 = *arg1;
    if (temp_v1 == 0) {
        return 1;
    }
    if (arg2 >= 0x100) {
        **arg0 = 0;
        return 0;
    }
    temp_a0 = *arg0;
    *temp_a0 = ((temp_v1 ^ 1) == 0) ? 0 : arg2;
    *arg0 = temp_a0 + 1;
    *arg1 -= 1;
    return 1;
}
