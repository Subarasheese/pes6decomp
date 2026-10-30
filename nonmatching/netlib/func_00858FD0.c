/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00858FD0(s32 arg0, s64 arg1) {
    s64 temp_v0;

    if (arg0 != 0) {
        temp_v0 = (s64) (arg1 << 0x30) >> 0x30;
        if ((temp_v0 > 0) && (temp_v0 < 9)) {
            return arg0 + ((temp_v0 - 1) * 0x1C);
        }
    }
    return 0;
}
