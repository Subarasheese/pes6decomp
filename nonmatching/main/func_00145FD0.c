/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s64 func_00147D40(s32);
M2C_UNK func_00146040(s32, void *, s32 *, M2C_UNK); /* extern */

void func_00145FD0(s32 arg0, void *arg1, s32 *arg2) {
    s32 sp4C;
    s32 *var_s0;

    var_s0 = arg2;
    if (func_00147D40(M2C_FIELD(arg1, s32 *, 0xC)) != 0) {
        *var_s0 = 0;
        return;
    }
    if (var_s0 == NULL) {
        var_s0 = &sp4C;
    }
    func_00146040(arg0, arg1, var_s0, 1);
}
