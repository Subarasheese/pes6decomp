/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s8 *func_008BA6A0(s32, s8 *, s32);                  /* extern */

s32 func_008BA4D0(s32 arg0, s8 *arg1, s8 *arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 var_a2;
    s32 var_s0;
    s8 *temp_v0;
    s8 *var_s3;
    s8 *var_s4;
    s8 temp_a1;

    var_s4 = arg1;
    var_s3 = arg2;
    if (arg4 <= 0) {
        return 0;
    }
    if (arg4 == 1) {
        M2C_FIELD(var_s4, s8 *, 0) = 0;
        return 1;
    }
    if (var_s4 == NULL) {
        return 0;
    }
    if (var_s3 != NULL) {
        var_s0 = 0;
        if (arg3 > 0) {
            do {
                var_s3 = func_008BA6A0(arg0, var_s3, arg5);
                var_s0 += 1;
            } while (var_s0 < arg3);
        }
        if (var_s3 != NULL) {
            temp_v0 = func_008BA6A0(arg0, var_s3, arg5);
            var_a2 = 1;
loop_19:
            if (var_s3 != temp_v0) {
                temp_a1 = *var_s3;
                if ((temp_a1 != 0xA) && (temp_a1 != 0)) {
                    if (var_a2 < arg4) {
                        *var_s4 = temp_a1;
                        var_s3 += 1;
                        var_s4 += 1;
                        var_a2 += 1;
                        goto loop_19;
                    }
                }
            }
            if (var_a2 == 1) {
                var_a2 += 1;
                *var_s4 = 0x20;
                var_s4 += 1;
            }
            *var_s4 = 0;
            return var_a2;
        }
        M2C_FIELD(var_s4, s8 *, 0) = 0x20;
        M2C_FIELD(var_s4, s8 *, 1) = 0;
        return 2;
    }
    M2C_FIELD(var_s4, s8 *, 0) = 0x20;
    M2C_FIELD(var_s4, s8 *, 1) = 0;
    return 2;
}
