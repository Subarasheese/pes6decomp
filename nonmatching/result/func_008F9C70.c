/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00C132B0(s32);                             /* extern */
s32 func_00C132C0();                                /* extern */
extern u8 D_003E7994;

s32 func_008F9C70(s32 arg0) {
    s32 var_v0;

    var_v0 = (func_00C132C0() & 0xFF) == 0xB;
    if (var_v0 != 0) {
        var_v0 = D_003E7994 == (func_00C132B0(arg0) & 0xFF);
    }
    return var_v0;
}
