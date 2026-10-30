/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002260F0(s32);
s32 func_00981D90(s32 arg0) {
    s32 temp_v0;

    if ((arg0 & 0xFF) >= 0x50) {
        return 4;
    }
    temp_v0 = func_002260F0(arg0);
    if (temp_v0 != 0) {
        return M2C_FIELD(temp_v0, u8 *, 0x39) & 0xF;
    }
    return 4;
}
