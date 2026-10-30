/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00151EA0(M2C_UNK);                         /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */

void func_00C6C5D0(void) {
    M2C_UNK var_a0;

    if (func_00151EA0(2) == 0) {
        var_a0 = 0x8C040038;
    } else {
        var_a0 = 0x8C040037;
    }
    func_0026E840(var_a0);
}
