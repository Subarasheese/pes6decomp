/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00907CC0(void *arg0, u32 arg1) {
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 0x201);
    switch (temp_v1) {                              /* irregular */
    case 6:
        if (arg1 >= 0x40001U) {
            return 1;
        }
block_11:
    default:
        return 0;
    case 5:
        if (arg1 >= 0x190001U) {
            return 1;
        }
        goto block_11;
    }
}
