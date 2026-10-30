/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00AA24E0(void *, s32, s32);
void func_00AA2AC0(void *arg0, s32 arg1, s32 arg2) {
    s32 var_a1;

    var_a1 = arg1;
    if (var_a1 <= 0) {
        var_a1 = -var_a1;
    }
    if (var_a1 >= 0x31) {
        var_a1 = 0x30;
    }
    func_00AA24E0(arg0, var_a1, arg2);
}
