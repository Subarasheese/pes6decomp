/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

void *func_00224520(s32, s32);                      /* extern */
s32 func_00224D90(s32, s32);                        /* extern */
s32 func_00226710();                                /* extern */
M2C_UNK func_0094CFE0(s32, s32);                    /* extern */

void func_0094D240(void) {
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s1_3;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s2_3;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;

    if ((func_00226710() & 0xFF) != 0x2E) {
        var_s2 = 0;
        do {
            if ((var_s2 & 0xFF) != 0xFF) {
                var_s1 = 0;
                do {
                    temp_v0 = func_00224520(var_s2 & 0xFF, var_s1);
                    if ((temp_v0 != NULL) && (func_00224D90(var_s2 & 0xFF, var_s1) & 0xFFFF)) {
                        func_0094CFE0(var_s2 & 0xFF, var_s1);
                        M2C_FIELD(temp_v0, u8 *, 3) = (u8) ((M2C_FIELD(temp_v0, u8 *, 3) & ~0xE0) | ((0 & 7) << 5));
                    }
                    var_s1 = (var_s1 + 1) & 0xFF;
                } while (var_s1 < 0x20);
            }
            var_s2 += 1;
        } while (var_s2 < 0x50);
        return;
    }
    var_s1_2 = 0;
    do {
        var_s2_2 = 0;
        temp_s0 = var_s1_2 & 0xFF;
loop_5:
        temp_a1 = var_s2_2 & 0xFF;
        if ((temp_s0 < 0x50) && ((temp_a1 & 0xFF) < 0x20)) {
            temp_v0_2 = func_00224520(temp_s0, temp_a1);
            if (temp_v0_2 != NULL) {
                M2C_FIELD(temp_v0_2, s8 *, 1) = 0x64;
            }
        }
        var_s2_2 += 1;
        if (var_s2_2 < 0x20) {
            goto loop_5;
        }
        var_s1_2 += 1;
    } while (var_s1_2 < 0x50);
    var_s1_3 = 0;
    do {
        var_s2_3 = 0;
        temp_s0_2 = var_s1_3 & 0xFF;
loop_13:
        temp_a1_2 = var_s2_3 & 0xFF;
        if ((temp_s0_2 < 0x50) && ((temp_a1_2 & 0xFF) < 0x20)) {
            temp_v0_3 = func_00224520(temp_s0_2, temp_a1_2);
            if (temp_v0_3 != NULL) {
                M2C_FIELD(temp_v0_3, s8 *, 2) = 0;
            }
        }
        var_s2_3 += 1;
        if (var_s2_3 < 0x20) {
            goto loop_13;
        }
        var_s1_3 += 1;
    } while (var_s1_3 < 0x50);
}
