/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0016A998(u16 *arg0) {
    u16 temp_v1;

    temp_v1 = *arg0;
    if ((temp_v1 != 0) && (((s32) temp_v1 < 0xC) || (((s32) temp_v1 < 0x10) && ((s32) temp_v1 >= 0xE)))) {
        return 1;
    }
    return 0;
}
