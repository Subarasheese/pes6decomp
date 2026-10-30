/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


u8 func_00B21D50(void *, s32);                      /* extern */
M2C_UNK func_00C01E60(void *, s32, u8);             /* extern */
s32 func_00C02570();                                /* extern */

void func_00C01DF0(void *arg0, s32 arg1) {
    s32 temp_s0;
    u8 var_v0;

    temp_s0 = func_00C02570();
    if (arg1 == 0) {
        var_v0 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x2D);
    } else {
        var_v0 = func_00B21D50(arg0, arg1);
    }
    func_00C01E60(arg0, temp_s0, var_v0);
}
