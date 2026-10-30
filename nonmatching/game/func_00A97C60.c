/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B3070(u16);                             /* extern */

void func_00A97C60(void *arg0) {
    s32 temp_a0;
    s32 temp_a1;
    s32 var_v1;

    temp_a1 = func_009B3070(M2C_FIELD(arg0, u16 *, 0x28)) & 0xFFFF;
    if (temp_a1 >= 0x11) {
        temp_a0 = M2C_FIELD(arg0, s32 *, 0x1C) * (0x8000 - temp_a1);
        var_v1 = temp_a0 >> 0xF;
        if (temp_a0 < 0) {
            var_v1 = (s32) (temp_a0 + 0x7FFF) >> 0xF;
        }
        M2C_FIELD(arg0, s32 *, 0x1C) = var_v1;
    }
}
