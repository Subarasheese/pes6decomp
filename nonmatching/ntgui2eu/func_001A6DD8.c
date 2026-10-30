/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001A6DC8();                                /* extern */

s32 func_001A6DD8(s32 arg0) {
    if ((u32) (arg0 - 0xD) >= 0x23U) {
        return -1;
    }
    return func_001A6DC8();
}
