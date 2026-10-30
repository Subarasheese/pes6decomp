/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B6DB70(void);
s32 func_00B6DA70(void) {
    u32 temp_v0;

    temp_v0 = func_00B6DB70();
    if (temp_v0 != 0) {
        return M2C_FIELD(temp_v0, s32 *, 0x64);
    }
    return 0;
}
