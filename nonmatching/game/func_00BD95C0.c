/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00BF6280(void);
s32 func_009E1C90(M2C_UNK);                         /* extern */

s32 func_00BD95C0(void) {
    if ((func_009E1C90(1) & 0xFF) != 0xC) {
        goto block_1;
    }
    if (func_00BF6280() == 0) {
        return 1;
    }
block_1:
    return 0;
}
