/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00904460(void *arg0) {
    u64 temp_a0;
    u8 temp_a1;

    temp_a1 = M2C_FIELD(arg0, u8 *, 0x50);
    temp_a0 = (u64) ((s64) temp_a1 << 0x3C) >> 0x3D;
    if (temp_a0 != 2) {
        if (!(temp_a1 & 1)) {
            if (temp_a0 != 1) {
                return -1;
            }
            return 0;
        }
        return 2;
    }
    return 1;
}
