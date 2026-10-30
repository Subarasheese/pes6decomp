/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B3070(s32, u16);                        /* extern */

s32 func_009F4E50(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v1;
    s32 var_a1;
    s32 var_v0;

    var_a1 = func_009B3070(arg1, M2C_FIELD(arg0, u16 *, 0x28)) & 0xFFFF;
    temp_v1 = arg3 & 0xFFFF;
    if (var_a1 >= temp_v1) {
        var_a1 = temp_v1;
    }
    if (((((arg1 & 0xFFFF) - M2C_FIELD(arg0, u16 *, 0x28)) + 0x10000) & 0xFFFF) < 0x8001) {
        var_v0 = arg2 + var_a1;
    } else {
        var_v0 = arg2 - var_a1;
    }
    return var_v0 & 0xFFFF;
}
