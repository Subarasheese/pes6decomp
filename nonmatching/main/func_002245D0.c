/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
s32 func_00225680(s32);                             /* extern */
s32 func_002260F0(s32);                             /* extern */

void func_002245D0(s32 arg0, s32 arg1, s8 arg2) {
    s32 temp_a0;
    s32 temp_s2;
    s32 temp_v0;
    s32 var_s3;
    s32 var_s4;
    u8 var_v1;

    var_s4 = 0xFF;
    if (func_00231240() != 1) {
        var_s3 = 0;
loop_2:
        if ((arg0 & 0xFFFF) != (func_00225680(var_s3) & 0xFFFF)) {
            var_s3 = (var_s3 + 1) & 0xFF;
            if (var_s3 < 0x48) {
                goto loop_2;
            }
        } else {
            var_s4 = var_s3 & 0xFF;
        }
        if ((var_s4 & 0xFF) != 0xFF) {
            temp_v0 = func_002260F0(var_s4);
            if (temp_v0 != 0) {
                temp_s2 = func_002260F0(var_s4);
                if (func_00231240() == 1) {
                    var_v1 = 0xFF;
                } else if (temp_s2 != 0) {
                    temp_a0 = arg1 & 0xFF;
                    if (temp_a0 < 0x20) {
                        var_v1 = M2C_FIELD((temp_a0 + temp_s2), u8 *, 0x4B1);
                    } else {
                        var_v1 = 0xFF;
                    }
                } else {
                    var_v1 = 0xFF;
                }
                if ((var_v1 & 0xFF) < 0x20) {
                    M2C_FIELD((((arg1 & 0xFF) * 0x16) + temp_v0), s8 *, 0x1E7) = arg2;
                }
            }
        }
    }
}
