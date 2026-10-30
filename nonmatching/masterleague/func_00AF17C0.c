/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00AF7970(void);
s32 func_00AF17C0(void) {
    u32 temp_v0;

    temp_v0 = func_00AF7970();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, s32 *, 0x1AC) == 4) {
            return 1;
        }
        return 0;
    }
    return 1;
}
