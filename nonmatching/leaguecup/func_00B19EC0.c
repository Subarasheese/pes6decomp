/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00B19EC0(void *arg0) {
    s32 temp_a1;
    s32 temp_v1;
    s32 var_v1;

    if (arg0 != NULL) {
        if (M2C_FIELD(arg0, s32 *, 8) != 0) {
            temp_a1 = M2C_FIELD(arg0, s32 *, 0x18);
            temp_v1 = M2C_FIELD(arg0, s32 *, 0xC);
            if (temp_a1 < temp_v1) {
                var_v1 = 2;
            } else if (temp_v1 != temp_a1) {
                var_v1 = 3;
            } else {
                var_v1 = 4;
            }
            goto block_15;
        }
        if (M2C_FIELD(arg0, u16 *, 4) != 0xFFFF) {
            var_v1 = 1;
block_15:
            M2C_FIELD(arg0, s32 *, 0x2C) = var_v1;
        } else {
            M2C_FIELD(arg0, s32 *, 0x2C) = 0;
        }
    }
}
