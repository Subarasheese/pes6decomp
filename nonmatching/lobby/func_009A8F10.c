/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009A8F10(s32 arg0, s64 arg1) {
    s64 temp_a0;

    if (arg0 == 2) {
        return 0;
    }
    if ((arg0 == 1) && (((s64) (arg1 << 0x38) >> 0x38) == 2)) {
        return 2;
    }
    temp_a0 = (s64) (arg1 << 0x38) >> 0x38;
    if (temp_a0 < 6) {
        if (temp_a0 >= 4) {
            if ((temp_a0 >= 4) && (temp_a0 < 6)) {
                return 4;
            }
            if (temp_a0 == 1) {

            }
            return -1;
        }
        return 1;
    }
    return 3;
}
