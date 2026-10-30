/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B611F0(s32 arg0) {
    s32 temp_v0;

    temp_v0 = arg0 & 0xFF;
    if (temp_v0 >= 4) {
        if (temp_v0 >= 5) {
            return 4;
        }
        return 8;
    }
    return 0x10;
}
