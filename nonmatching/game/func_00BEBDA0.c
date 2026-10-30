/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00C01090(M2C_UNK);                         /* extern */

s32 func_00BEBDA0(void) {
    if (func_00C01090(0x16) == 0) {
        if ((func_00C01090(0x17) == 0) && (func_00C01090(0x1A) == 0) && (func_00C01090(0x1B) == 0)) {
            return 0;
        }
        goto block_3;
    }
block_3:
    return 1;
}
