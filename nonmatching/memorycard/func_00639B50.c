/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002E8BD0(void);
s32 func_00639B50(void) {
    s32 temp_v1;
    s32 var_v0;
    s32 var_v0_2;

    if (func_002E8BD0() != 0x48) {
        var_v0_2 = 0x50C;
    } else {
        var_v0_2 = 0x113C;
    }
    temp_v1 = var_v0_2 + 0x3FF;
    var_v0 = temp_v1 >> 0xA;
    if (temp_v1 < 0) {
        var_v0 = (s32) (temp_v1 + 0x3FF) >> 0xA;
    }
    return var_v0;
}
