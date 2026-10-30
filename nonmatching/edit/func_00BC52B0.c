/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
M2C_UNK func_00BC5370(s32, s32, s32, s32, s32, s32, s32); /* extern */

void func_00BC52B0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    s32 var_v0;
    s32 var_v0_2;

    if (arg0 != -1) {
        var_v0 = func_001F08B0(arg0);
    } else {
        var_v0 = 0;
    }
    if (arg1 == -1) {
        var_v0_2 = 0;
    } else {
        var_v0_2 = func_001F08B0(arg1);
    }
    func_00BC5370(var_v0, var_v0_2, arg2, arg3, arg4, arg5, arg6);
}
