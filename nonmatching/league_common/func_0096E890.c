/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0096E890(s32 arg0) {
    s32 temp_v1;

    temp_v1 = arg0 & 0xFFFF;
    if ((temp_v1 >= 0x1155) && (temp_v1 < 0x11F5)) {
        return 1;
    }
    return 0;
}
