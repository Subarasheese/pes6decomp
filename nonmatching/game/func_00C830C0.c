/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0020CA70();                            /* extern */
M2C_UNK func_00C83450(s32, M2C_UNK);                /* extern */
M2C_UNK func_00C85480();                            /* extern */

void func_00C830C0(void) {
    s32 var_s0;

    var_s0 = 0;
    do {
        func_00C83450(var_s0, 1);
        var_s0 += 1;
    } while (var_s0 < 8);
    func_00C85480();
    func_0020CA70();
}
