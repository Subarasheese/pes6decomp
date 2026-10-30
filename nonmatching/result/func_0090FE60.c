/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0090FE60(s32 arg0) {
    s32 temp_v0;

    temp_v0 = arg0 & ~0x80;
    if (!(arg0 & 0x80)) {
        return temp_v0;
    }
    if (temp_v0 >= 0x3C) {
        if (temp_v0 >= 0x69) {
            if (temp_v0 >= 0x78) {
                return 0x78;
            }
            return 0x69;
        }
        return 0x5A;
    }
    return 0x2D;
}
