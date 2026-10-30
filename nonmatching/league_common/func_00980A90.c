/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_0022BAC0(u8);                              /* extern */
void *func_0022BFF0(s32, s32);                      /* extern */
void *func_0022C140();                              /* extern */

s32 func_00980A90(s32 arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_s1;
    s32 var_s3;
    s32 var_s4;
    s64 var_s6;
    void *temp_v0;
    void *temp_v0_2;

    var_s6 = 0;
    var_s3 = 0xFF;
    temp_v0 = func_0022C140();
    if (temp_v0 != NULL) {
        var_s4 = 0;
        if ((s32) M2C_FIELD(temp_v0, u8 *, 5) > 0) {
            temp_s1 = arg1 & 0xFFFF;
loop_6:
            temp_v0_2 = func_0022BFF0(arg0, var_s4 & 0xFF);
            if (temp_v0_2 != NULL) {
                if (temp_s1 != (func_0022BAC0(M2C_FIELD(temp_v0_2, u8 *, 5)) & 0xFFFF)) {
                    if (temp_s1 == (func_0022BAC0(M2C_FIELD(temp_v0_2, u8 *, 6)) & 0xFFFF)) {
                        var_s3 = var_s4 & 0xFF;
                        if ((M2C_FIELD(temp_v0_2, u8 *, 0x17) & 1) == 1) {
                            var_s6 = (s64) (1 << 0x38) >> 0x38;
                        } else {
                            var_s6 = 2;
                        }
                    } else {
                        goto block_17;
                    }
                } else {
                    var_s3 = var_s4 & 0xFF;
                    if (!(M2C_FIELD(temp_v0_2, u8 *, 0x17) & 1)) {
                        var_s6 = 1;
                    } else {
                        var_s6 = 2;
                    }
                }
            } else {
block_17:
                var_s4 += 1;
                if (var_s4 >= (s32) M2C_FIELD(temp_v0, u8 *, 5)) {

                } else {
                    goto loop_6;
                }
            }
        }
        temp_a0 = var_s3 & 0xFF;
        if ((temp_a0 == 0) && (((s64) (var_s6 << 0x38) >> 0x38) == 1)) {
            return 0xA;
        }
        if ((temp_a0 == 0) && (((s64) (var_s6 << 0x38) >> 0x38) == 2)) {
            return 5;
        }
        if ((temp_a0 > 0) && (temp_a0 < 3)) {
            return 5;
        }
        goto block_28;
    }
block_28:
    return 0;
}
