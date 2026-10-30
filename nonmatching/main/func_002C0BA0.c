/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00C13280(s32);                           /* extern */
s32 func_00C132B0(s32);                             /* extern */
s32 func_00C132C0();                                /* extern */
extern u8 D_003E9D51;

u8 func_002C0BA0(s32 arg0) {
    u8 var_s0;

    var_s0 = 0;
    if ((func_00C132C0() & 0xFF) == 0x1C) {
        if (D_003E9D51 == (((s32) (func_00C132B0(arg0) & 0xFF) >> 5) & 1)) {
            var_s0 = M2C_FIELD(func_00C13280(arg0), u8 *, 2);
        }
    }
    return var_s0;
}
