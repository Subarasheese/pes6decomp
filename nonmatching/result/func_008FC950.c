/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00921CA8[];

s32 func_008FC950(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_a0;
    s32 var_v0;

    var_v0 = 0;
    if ((*(s32 *)D_00921CA8) != 0) {
        temp_a0 = arg0 & 0xFF;
        if ((temp_a0 < 2) && (arg1 < 8) && (arg2 < 6)) {
            var_v0 = M2C_FIELD(((arg2 * 4) + ((arg1 * 0x18) + ((temp_a0 * 0x180) + (*(s32 *)D_00921CA8)))), s32 *, 0xC0);
        }
    }
    return var_v0;
}
