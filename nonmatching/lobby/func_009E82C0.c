/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_009E8A20(void *, s32);
void func_009E82C0(void *arg0) {
    s32 var_a1;

    if (M2C_FIELD(arg0, s32 *, 0x50) != 0) {
        var_a1 = 0x01FB0074;
    } else {
        var_a1 = 0x01FB0073;
    }
    func_009E8A20(arg0, var_a1);
}
