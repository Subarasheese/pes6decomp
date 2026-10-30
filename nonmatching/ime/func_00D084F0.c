/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00D084F0(void *arg0, s32 arg1) {
    s32 var_v1;

    if (arg0 == NULL) {
        goto block_14;
    }
    if (arg1 >= 0) {
        if (arg1 < 0xA) {
            var_v1 = 0;
loop_11:
            if (var_v1 < 5) {
                if (M2C_FIELD((arg0 + (var_v1 * 4)), s32 *, 4) != arg1) {
                    var_v1 += 1;
                    goto loop_11;
                }
                M2C_FIELD(arg0, s32 *, 0x51C) = var_v1;
                M2C_FIELD(arg0, s8 *, 0x525) = 1;
                return 1;
            }
            goto block_14;
        }
        return 0;
    }
block_14:
    return 0;
}
