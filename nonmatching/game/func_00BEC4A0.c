/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00C01090(M2C_UNK);                         /* extern */

s32 func_00BEC4A0(void) {
    s32 var_s0;

    var_s0 = 0;
    if (func_00C01090(0x16) == 0) {
        if (func_00C01090(0x1A) == 0) {
            if (func_00C01090(0x17) == 0) {
                if (func_00C01090(0x1B) != 0) {
                    goto block_9;
                }
            } else {
block_9:
                var_s0 = 2;
            }
        } else {
            goto block_3;
        }
    } else {
block_3:
        var_s0 = 1;
    }
    return var_s0;
}
