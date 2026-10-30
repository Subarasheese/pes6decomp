/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00292AA0();                                /* extern */
M2C_UNK func_00B78BA0();                            /* extern */
M2C_UNK func_00B78D80();                            /* extern */

void func_00B78B60(void) {
    if (func_00292AA0() != 0) {
        func_00B78BA0();
        return;
    }
    func_00B78D80();
}
