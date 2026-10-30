/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00BF6280(void);
s32 func_009E1C90(M2C_UNK);                         /* extern */
s32 func_00C01090(M2C_UNK);                         /* extern */

s32 func_00BD98D0(void) {
    if ((func_009E1C90(1) & 0xFF) != 0xC) {
        goto block_1;
    }
    if ((func_00BF6280() == 0xA) && ((func_009E1C90(3) & 0xFF) == 4)) {
        if (func_00C01090(0x1C) == 0) {
            if (func_00C01090(0x1D) != 0) {
                goto block_7;
            }
            goto block_1;
        }
block_7:
        return 1;
    }
block_1:
    return 0;
}
