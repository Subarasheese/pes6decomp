/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00224D90(s32, s32);                        /* extern */

void func_0096FB20(void *arg0, s32 arg1) {
    s8 var_s0;
    s8 var_s3;

    if (arg0 != NULL) {
        M2C_FIELD(arg0, s8 *, 0) = -1;
        var_s0 = 0;
        M2C_FIELD(arg0, s8 *, 1) = -1;
loop_2:
        var_s3 = 0;
loop_3:
        if ((arg1 & 0xFFFF) != (func_00224D90(var_s0 & 0xFF, var_s3 & 0xFF) & 0xFFFF)) {
            var_s3 += 1;
            if (var_s3 >= 0x20) {
                var_s0 += 1;
                if (var_s0 >= 0x48) {

                } else {
                    goto loop_2;
                }
            } else {
                goto loop_3;
            }
        } else {
            M2C_FIELD(arg0, s8 *, 0) = var_s0;
            M2C_FIELD(arg0, s8 *, 1) = var_s3;
        }
    }
}
