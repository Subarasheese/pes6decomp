/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00A427F0(M2C_UNK);                         /* extern */

s32 func_00A6D390(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x400) {
        if (func_00A427F0(1) != 0) {
            return 1;
        }
        goto block_3;
    }
block_3:
    return 0;
}
