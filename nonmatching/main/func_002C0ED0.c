/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00C132B0(s32);                             /* extern */
s32 func_00C132C0();                                /* extern */
extern u8 D_003E9D51;

s32 func_002C0ED0(s32 arg0) {
    s32 var_s0;

    var_s0 = 0;
    if ((u32) ((func_00C132C0() & 0xFF) - 6) < 2U) {
        var_s0 = D_003E9D51 == (((s32) (func_00C132B0(arg0) & 0xFF) >> 5) & 1);
    }
    return var_s0;
}
