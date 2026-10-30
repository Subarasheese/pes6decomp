/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00816690(void *, M2C_UNK);             /* extern */
M2C_UNK func_00D0F680(M2C_UNK);                     /* extern */

s32 func_008161E0(void *arg0) {
    s8 var_v0;
    s8 var_v0_2;
    s8 var_v0_3;

    if (arg0 == NULL) {
        return 1;
    }
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s8 *, 0x41D) = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 8) != 4) {
        func_00816690(arg0, 3);
        goto block_25;
    }
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s8 *, 0x41F);
    } else {
        var_v0 = 0;
    }
    if (((s64) ((s64) var_v0 << 0x38) >> 0x38) != 1) {
        if (arg0 != NULL) {
            var_v0_2 = M2C_FIELD(arg0, s8 *, 0x420);
        } else {
            var_v0_2 = 0;
        }
        if (((s64) ((s64) var_v0_2 << 0x38) >> 0x38) == 1) {
            goto block_16;
        }
        if (arg0 != NULL) {
            var_v0_3 = M2C_FIELD(arg0, s8 *, 0x41E);
        } else {
            var_v0_3 = 0;
        }
        if (((s64) ((s64) var_v0_3 << 0x38) >> 0x38) == 1) {
            func_00816690(arg0, 6);
            if (M2C_FIELD(arg0, s8 *, 0x418) == 1) {
                func_00D0F680(0);
            }
        }
        goto block_25;
    }
block_16:
    func_00816690(arg0, 1);
    if (M2C_FIELD(arg0, s8 *, 0x418) == 1) {
        func_00D0F680(0);
        return 0;
    }
block_25:
    return 0;
}
