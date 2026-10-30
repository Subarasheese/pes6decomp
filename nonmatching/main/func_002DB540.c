/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_002DB540(s32 arg0) {
    s32 temp_v0;

    temp_v0 = arg0 & 0xFF;
    if (temp_v0 != 0) {
        if (temp_v0 >= 0x80) {
            if (temp_v0 >= 0xFF) {
                return 1;
            }
            return 2;
        }
        return 3;
    }
    return -1;
}
