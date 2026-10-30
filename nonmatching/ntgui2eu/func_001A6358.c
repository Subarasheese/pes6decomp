/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_012073C0[];

s32 func_001A6358(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    s32 temp_a0;
    s32 var_v0;

    var_v0 = M2C_FIELD(arg3, s32 (**)(s32, s32), 8)((arg3 * 0x10) | (arg0 & 0xFE) | 1, M2C_FIELD(arg3, s32 *, 0xC));
    if (var_v0 == 0) {
        var_v0 = -1;
        temp_a0 = (*(s32 *)D_012073C0);
        (*(s32 *)D_012073C0) = arg3;
        M2C_FIELD(arg3, s32 *, 0) = temp_a0;
        M2C_FIELD(arg3, s32 *, 4) = 0;
    }
    return var_v0;
}
