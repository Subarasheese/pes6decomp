/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00591C09[];

s32 func_00B274B0(s32 arg0) {
    s32 temp_v1;
    s32 var_a0;
    s32 var_v0;

    var_v0 = 1;
    if ((*(u8 *)D_00591C09) == 5) {
        temp_v1 = arg0 & 0xFF;
        var_a0 = 0;
        if ((temp_v1 > 0) && (temp_v1 < 0x17)) {
            var_a0 = 1;
        }
        if (var_a0 == 0) {
            var_v0 = 0;
        }
    }
    return var_v0;
}
