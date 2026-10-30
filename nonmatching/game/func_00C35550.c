/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00BF6280(void);
s32 func_009E1C90(M2C_UNK);                         /* extern */

s32 func_00C35550(void) {
    if (func_00BF6280() == 0x10) {
        if ((func_009E1C90(3) & 0xFF) == 9) {
            return 1;
        }
        goto block_3;
    }
block_3:
    return 0;
}
