/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00292F00(s32 arg0) {
    s32 temp_v0;

    temp_v0 = arg0 & 0xFF;
    if (temp_v0 <= 0) {
        return 0;
    }
    if (temp_v0 < 0xA) {
        return 1;
    }
    if (temp_v0 >= 0x1D) {
        return 3;
    }
    return 2;
}
