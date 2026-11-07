/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00C132B0(s32);                             /* extern */
s32 func_00C132C0();                                /* extern */
extern u8 D_003E75EC;

s32 func_002C2900(s32 arg0) {
    s32 temp_v1;
    s32 var_s0;

    var_s0 = 0;
    temp_v1 = func_00C132C0() & 0xFF;
    if ((temp_v1 == 0x1B) || (temp_v1 == 0xF)) {
        var_s0 = D_003E75EC == (func_00C132B0(arg0) & 0xFF);
    }
    return var_s0;
}
