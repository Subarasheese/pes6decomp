/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

u8 *func_00223C10(s32, s32);                        /* extern */
s32 func_002243B0(s32, s32);                        /* extern */
s32 func_00224BC0(s32, s32);                        /* extern */
s32 func_00B540F0(s32, s32);                        /* extern */

s32 func_00B53F40(s32 arg0, s32 arg1, s8 *arg2, s32 arg3) {
    s32 temp_a1;
    s32 temp_s1;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_v0;
    s8 var_s0;
    u8 *temp_v0;

    if ((arg0 & 0xFF) >= 0x31) {
        goto block_30;
    }
    if (arg2 != NULL) {
        *arg2 = 0;
    }
    var_s0 = 0;
loop_5:
    temp_s1 = func_00224BC0(arg1, var_s0 & 0xFF) & 0xFFFF;
    if (temp_s1 != 0) {
        temp_a1 = func_002243B0(arg1, var_s0 & 0xFF) & 0xFF;
        if (temp_a1 == 0xFF) {
            var_v0 = 0;
        } else {
            temp_v0 = func_00223C10(arg1, temp_a1);
            if (temp_v0 == NULL) {
                var_v0 = 0;
            } else if (arg3 == 1) {
                temp_v1 = *temp_v0 & 0xF;
                if ((temp_v1 != 0xA) && (temp_v1 != 9) && (temp_v1 != 8)) {
                    goto block_22;
                }
                var_v0 = 0;
            } else {
                temp_v1_2 = *temp_v0 & 0xF;
                if ((temp_v1_2 != 7) && (temp_v1_2 != 6) && (temp_v1_2 != 5)) {
block_22:
                    var_v0 = 1;
                } else {
                    var_v0 = 0;
                }
            }
        }
        if ((var_v0 != 0) && (func_00B540F0(arg0, temp_s1) == 0)) {
            if (arg2 == NULL) {
                return temp_s1;
            }
            *arg2 = var_s0;
            return temp_s1;
        }
        goto block_29;
    }
block_29:
    var_s0 += 1;
    if (var_s0 >= 0x20) {
block_30:
        return 0;
    }
    goto loop_5;
}
