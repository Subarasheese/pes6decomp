/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00C12C80(s32);                             /* extern */
void *func_00C13280(s32);                           /* extern */
s32 func_00C132B0(s32);                             /* extern */
s32 func_00C132C0();                                /* extern */
extern u8 D_003E9D51;

s32 func_002C0B10(s32 arg0) {
    s32 var_s1;

    var_s1 = 0;
    if (func_00C12C80(func_00C132C0()) != 0) {
        if (D_003E9D51 == (((s32) (func_00C132B0(arg0) & 0xFF) >> 5) & 1)) {
            var_s1 = (M2C_FIELD(func_00C13280(arg0), u8 *, 5) & 3) == 2;
        }
    }
    return var_s1;
}
