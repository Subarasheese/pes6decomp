/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00195358(s32, s32);                        /* extern */
extern char D_011FD510[];

s32 func_001954B8(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (M2C_FIELD((((void *)D_011FD510) + ((arg1 * 0x1C) + (arg0 * 0x70))), s32 *, 0x10) != 0) {
        var_v0 = func_00195358(arg0, arg0) == 0x3FFFF;
    }
    return var_v0;
}
