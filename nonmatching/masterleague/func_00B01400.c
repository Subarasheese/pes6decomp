/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002260F0(s32);
u8 func_00B01400(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_002260F0(arg0);
    if (temp_v0 != 0) {
        return M2C_FIELD(temp_v0, u8 *, 0x4A4);
    }
    return 0xFFU;
}
