/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_009EEDD0(void *, s32);
void func_009EB570(s32 arg0, s32 arg1) {
    s32 var_a1;

    var_a1 = arg1;
    if (var_a1 >= 0x100) {
        var_a1 = 0xFF;
    } else if (var_a1 < -0xFF) {
        var_a1 = -0xFF;
    }
    func_009EEDD0(arg0 + 0x170, var_a1);
}
