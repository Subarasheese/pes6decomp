/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

void *func_00C13280(s32);                           /* extern */
s32 func_00C132B0(s32);                             /* extern */
s32 func_00C132C0();                                /* extern */
extern u8 D_003E9D50;

s32 func_002BEDD0(s32 arg0) {
    s32 var_s0;
    s32 var_v0;
    u8 temp_v1;

    var_s0 = 0;
    var_v0 = (func_00C132C0() & 0xFF) == 0xB;
    if (var_v0 != 0) {
        var_v0 = D_003E9D50 == (func_00C132B0(arg0) & 0xFF);
    }
    if (var_v0 != 0) {
        temp_v1 = M2C_FIELD(func_00C13280(arg0), u8 *, 5);
        var_s0 = 1;
        if (!(temp_v1 & 0x10) && !(temp_v1 & 0x20)) {
            var_s0 = 0;
        }
    }
    return var_s0;
}
