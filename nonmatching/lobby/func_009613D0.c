/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00D0BAF0();                                /* extern */

u8 func_009613D0(s32 arg0) {
    s32 temp_a0;
    s32 temp_v0;

    temp_v0 = func_00D0BAF0();
    if (temp_v0 != 0) {
        temp_a0 = arg0 & 0xFFFF;
        if (temp_a0 < 0) {
            return 0U;
        }
        if (temp_a0 < 0xCA) {
            return M2C_FIELD((temp_a0 + temp_v0), u8 *, 0x152DF);
        }
        return 0U;
    }
    return 0U;
}
