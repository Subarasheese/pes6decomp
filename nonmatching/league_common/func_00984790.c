/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002260F0(s32);
s32 func_00230410();                                /* extern */

void func_00984790(s32 arg0) {
    s32 temp_v0;

    if (((arg0 & 0xFF) < 0x50) && (func_00230410() != 0)) {
        temp_v0 = func_002260F0(arg0);
        if (temp_v0 != 0) {
            M2C_FIELD(temp_v0, u8 *, 0x38) = (u8) (M2C_FIELD(temp_v0, u8 *, 0x38) + 1);
        }
    }
}
