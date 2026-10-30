/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00C13280(s32);                           /* extern */
s32 func_00C132B0(s32);                             /* extern */
s32 func_00C132C0();                                /* extern */
extern u8 D_003E9D50;

s32 func_002BFD60(s32 arg0) {
    s32 var_s0;
    s32 var_v0;
    u32 temp_v0;

    var_s0 = 0;
    var_v0 = (func_00C132C0() & 0xFF) == 0xA;
    if (var_v0 != 0) {
        var_v0 = D_003E9D50 == (func_00C132B0(arg0) & 0xFF);
    }
    if (var_v0 != 0) {
        temp_v0 = M2C_FIELD(func_00C13280(arg0), u8 *, 4) - 3;
        var_s0 = 0;
        if ((temp_v0 < 0xBU) && ((1 << temp_v0) & 0x405)) {
            var_s0 = 1;
        }
    }
    return var_s0;
}
