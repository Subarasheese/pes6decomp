/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_009E8A20(void *, s32);
void func_00976BA0(void *arg0) {
    s32 var_a1;

    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x58), s32 *, 8) == 0) {
        var_a1 = 0x01FB0073;
    } else {
        var_a1 = 0x01FB0074;
    }
    func_009E8A20(arg0, var_a1);
}
