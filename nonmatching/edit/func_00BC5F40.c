/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BC5F40(s32 arg0) {
    s32 temp_v1;

    temp_v1 = arg0 & 0xFFFF;
    if ((temp_v1 >= 0x40) && (temp_v1 < 0xCC)) {
        return 3;
    }
    if (temp_v1 != 0x126) {
        if ((temp_v1 >= 0xDD) && (temp_v1 < 0xFE)) {
            return 3;
        }
        return 0;
    }
    return 3;
}
