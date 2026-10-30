/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008D1F20(void *);                          /* extern */

s32 func_008CB660(void *arg0, s32 arg1) {
    void *temp_s0;

    if (arg0 == NULL) {
        return 5;
    }
    temp_s0 = M2C_FIELD(arg0, void **, 0x474);
    if (func_008D1F20(arg0 + 0x480) == 0) {
        return 5;
    }
    if (temp_s0 != NULL) {
        if (M2C_FIELD(temp_s0, u8 *, 0x354) == 0) {
            if (M2C_FIELD((M2C_FIELD(((arg1 & 0xFF) + temp_s0), u8 *, 1) + temp_s0), u8 *, 0x85) == 0) {
                return 5;
            }
            goto block_11;
        }
        goto block_11;
    }
block_11:
    return 2;
}
