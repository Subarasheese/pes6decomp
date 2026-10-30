/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00B19D80(void *arg0) {
    s32 temp_a1;
    s32 temp_v1;
    s32 var_v1;

    if (arg0 != NULL) {
        if (M2C_FIELD(arg0, s32 *, 8) != 0) {
            temp_a1 = M2C_FIELD(arg0, s32 *, 0xC);
            temp_v1 = M2C_FIELD(arg0, s32 *, 0x18);
            if (temp_v1 >= temp_a1) {
                if (temp_a1 >= temp_v1) {
                    var_v1 = 6;
                } else {
                    var_v1 = 7;
                }
            } else {
                var_v1 = 5;
            }
            goto block_17;
        }
        if (M2C_FIELD(arg0, u16 *, 4) != 0xFFFF) {
            var_v1 = 1;
block_17:
            M2C_FIELD(arg0, s32 *, 0x2C) = var_v1;
        } else {
            M2C_FIELD(arg0, s32 *, 0x2C) = 0;
        }
    }
}
