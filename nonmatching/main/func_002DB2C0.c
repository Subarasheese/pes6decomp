/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002DB960(void *, s32, M2C_UNK);        /* extern */

s16 func_002DB2C0(void *arg0, s16 arg1, s32 arg2, s32 arg3) {
    M2C_UNK var_a2;
    M2C_UNK var_a2_2;
    s32 temp_v0;
    s32 temp_v0_2;

    if (arg0 == NULL) {
        return arg1;
    }
    if (arg3 != 0) {
        temp_v0 = arg3 & 0xFF;
        if (temp_v0 != 0) {
            if (temp_v0 >= 0x80) {
                if (temp_v0 >= 0xFF) {
                    var_a2 = 1;
                } else {
                    var_a2 = 2;
                }
            } else {
                var_a2 = 3;
            }
        } else {
            var_a2 = -1;
        }
        func_002DB960(arg0, arg1 + 1, var_a2);
    } else if (arg2 != 0) {
        temp_v0_2 = arg2 & 0xFF;
        if (temp_v0_2 != 0) {
            if (temp_v0_2 >= 0x80) {
                if (temp_v0_2 >= 0xFF) {
                    var_a2_2 = 1;
                } else {
                    var_a2_2 = 2;
                }
            } else {
                var_a2_2 = 3;
            }
        } else {
            var_a2_2 = -1;
        }
        func_002DB960(arg0, arg1 - 1, var_a2_2);
    }
    if (arg0 != NULL) {
        return M2C_FIELD(arg0, s16 *, 0x1A);
    }
    return 0;
}
