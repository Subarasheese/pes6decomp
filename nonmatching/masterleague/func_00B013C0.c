/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002260F0(s32);
s32 func_00B013C0(s32 arg0) {
    s32 temp_v0_2;
    u16 temp_v0;

    temp_v0_2 = func_002260F0(arg0);
    if (temp_v0_2 != 0) {
        temp_v0 = M2C_FIELD(temp_v0_2, u16 *, 0x3A);
        if ((s32) temp_v0 < 0x100) {
            return temp_v0 & 0xFF;
        }
        return 0xFF;
    }
    return 0xFF;
}
