/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_00B789F0();                                /* extern */

void func_00C955F0(void) {
    M2C_UNK var_a0;

    if (func_00B789F0() == 0) {
        var_a0 = 0x84050025;
    } else {
        var_a0 = 0x84050026;
    }
    func_0026E840(var_a0);
}
