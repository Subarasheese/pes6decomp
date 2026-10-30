/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00BFBB00();                            /* extern */
M2C_UNK func_00BFC1B0();                            /* extern */
M2C_UNK func_00BFE040();                            /* extern */
M2C_UNK func_00BFE120();                            /* extern */
s32 func_00C01090(M2C_UNK);                         /* extern */

void func_00BFED90(void) {
    func_00BFE040();
    func_00BFE120();
    if (func_00C01090(0x29) == 0) {
        func_00BFC1B0();
        func_00BFBB00();
    }
}
