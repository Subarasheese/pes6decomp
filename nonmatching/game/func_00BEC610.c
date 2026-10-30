/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BEC610(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x16) == 0x46) {
        if (M2C_FIELD(arg0, u16 *, 0x18) == 0xA) {
            return 1;
        }
        goto block_4;
    }
block_4:
    return 0;
}
