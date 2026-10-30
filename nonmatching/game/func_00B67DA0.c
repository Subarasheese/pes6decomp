/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001C02F0(s32);                             /* extern */
s32 func_009B3070(u16, u16);                        /* extern */

s32 func_00B67DA0(void **arg0) {
    s32 var_v0;
    void *temp_v0;

    temp_v0 = *arg0;
    var_v0 = 1;
    if (!((f32) func_001C02F0(func_009B3070(M2C_FIELD(temp_v0, u16 *, 0x26), M2C_FIELD(temp_v0, u16 *, 0x2C)) & 0xFFFF) < 18204.445f)) {
        var_v0 = 0;
    }
    return var_v0;
}
