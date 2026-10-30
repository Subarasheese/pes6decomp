/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00223C10(void);
s32 func_00224D90(s32, s32);                        /* extern */

void func_00B185F0(void) {
    s32 temp_a0;
    s32 temp_s3;
    s32 temp_s4;
    s32 temp_v1;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s5;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 *temp_v0_3;

    var_s2 = 0;
    do {
        var_s1 = 0;
loop_2:
        temp_s4 = func_00224D90(var_s2 & 0xFF, var_s1 & 0xFF) & 0xFFFF;
        if (temp_s4 != 0) {
            temp_v0 = func_00223C10();
            if (temp_v0 != NULL) {
                temp_a0 = *temp_v0 & 0xF;
                if ((temp_a0 != 0xA) && (temp_a0 != 9) && (temp_a0 != 8)) {

                } else {
                    var_s5 = 0;
                    var_s0 = 0;
loop_9:
                    var_s3 = 0;
loop_10:
                    if ((temp_s4 == (func_00224D90(var_s0 & 0xFF, var_s3 & 0xFF) & 0xFFFF)) && (temp_v0_2 = func_00223C10(), (temp_v0_2 != NULL))) {
                        temp_v1 = *temp_v0_2 & 0xF;
                        if ((temp_v1 != 7) && (temp_v1 != 6) && (temp_v1 != 5)) {

                        } else {
                            var_s5 = 1;
                        }
                        if ((var_s5 & 0xFF) != 1) {
                            goto block_18;
                        }
                    } else {
block_18:
                        var_s3 += 1;
                        if (var_s3 < 0x20) {
                            goto loop_10;
                        }
                    }
                    temp_s3 = var_s5 & 0xFF;
                    if (temp_s3 != 1) {
                        var_s0 += 1;
                        if (var_s0 < 0x48) {
                            goto loop_9;
                        }
                    }
                    temp_v0_3 = func_00223C10();
                    if ((temp_v0_3 != NULL) && (temp_s3 == 0)) {
                        *temp_v0_3 = (*temp_v0_3 & ~0xF) | 2;
                    }
                }
            }
        }
        var_s1 += 1;
        if (var_s1 < 0x20) {
            goto loop_2;
        }
        var_s2 += 1;
    } while (var_s2 < 0x48);
}
