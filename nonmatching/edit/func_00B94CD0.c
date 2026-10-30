/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00220AD0(s32, s32);
extern char D_00CE35B0[];

s32 func_00B94CD0(s32 arg0, s32 arg1) {
    s32 var_v0;
    u8 var_v1_2;
    void *var_v1;

    var_v0 = 0;
    if (arg0 < 0x1D) {
        var_v0 = (*(s32 *)D_00CE35B0) + (arg0 * 0x54) + 0x1A32;
    }
    var_v1 = NULL;
    if (arg0 < 0x1D) {
        var_v1 = (*(s32 *)D_00CE35B0) + (arg0 * 0x54) + 0x1A32;
    }
    if (arg1 != 0) {
        var_v1_2 = M2C_FIELD(var_v1, u8 *, 0x53);
    } else {
        var_v1_2 = M2C_FIELD(var_v1, u8 *, 0x52);
    }
    if (!(var_v1_2 & 0xFF)) {
        return func_00220AD0(arg0, arg1);
    }
    if (arg1 != 0) {
        return var_v0 + 0x15;
    }
    return var_v0;
}
