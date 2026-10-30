/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00905220(void *arg0) {
    u16 temp_v1;

    if (M2C_FIELD(arg0, u8 *, 0x16) == 5) {
        temp_v1 = M2C_FIELD(arg0, u16 *, 0x18);
        if ((temp_v1 != 0x82) && (temp_v1 != 0x81)) {
            goto block_8;
        }
        return 1;
    }
block_8:
    return 0;
}
