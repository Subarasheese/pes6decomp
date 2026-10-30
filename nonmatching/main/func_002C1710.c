/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00C132B0(s32);                             /* extern */
s32 func_00C132C0();                                /* extern */
extern u8 D_003E9D51;

s32 func_002C1710(s32 arg0) {
    s32 var_s0;

    var_s0 = 0;
    if ((func_00C132C0() & 0xFF) == 5) {
        if (D_003E9D51 == (((s32) (func_00C132B0(arg0) & 0xFF) >> 5) & 1)) {
            var_s0 = 1;
        }
    }
    return var_s0;
}
