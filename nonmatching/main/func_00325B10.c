/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00325B10(void *arg0) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0);
    switch (temp_v1) {                              /* irregular */
    case 12:
    case 10:
        if (M2C_FIELD(arg0, s32 *, 0x14) == 1) {
            return 1;
        }
block_9:
    default:
        return 0;
    case 7:
    case 6:
        if (M2C_FIELD(arg0, u8 *, 0xD) == 0) {
            return 1;
        }
        goto block_9;
    }
}
