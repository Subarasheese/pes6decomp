/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00223E00(u16);                             /* extern */
u16 *func_00224E20(s32, s32);                       /* extern */
s16 func_00225680(s32);                             /* extern */
s32 func_0096F810(u16);                             /* extern */

void func_00AFB6F0(void) {
    s32 temp_s4;
    s32 temp_v0;
    s32 temp_v0_3;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s3;
    s32 var_s5;
    s32 var_s6;
    u16 *temp_v0_2;
    u16 temp_a0;

    var_s0 = 0;
    do {
        var_s2 = 0;
        var_s1 = 0;
loop_2:
        temp_v0 = func_00223E00(var_s0 & 0xFFFF);
        if (temp_v0 != 0) {
            M2C_FIELD((temp_v0 + var_s1), s16 *, 0x14) = 0xFFFF;
        }
        var_s2 += 1;
        var_s1 += 2;
        if (var_s2 < 5) {
            goto loop_2;
        }
        var_s0 += 1;
    } while (var_s0 < 0x12B0);
    var_s6 = 0;
    do {
        var_s2_2 = 0;
loop_8:
        temp_v0_2 = func_00224E20(var_s6 & 0xFF, var_s2_2 & 0xFF);
        if (temp_v0_2 != NULL) {
            temp_a0 = *temp_v0_2;
            if (temp_a0 != 0) {
                temp_s4 = func_0096F810(temp_a0) & 0xFF;
                var_s5 = 0;
                var_s3 = 0;
                do {
                    temp_v0_3 = func_00223E00(*temp_v0_2);
                    if (temp_v0_3 != 0) {
                        M2C_FIELD((temp_v0_3 + var_s3), s16 *, 0x14) = func_00225680(temp_s4);
                    }
                    var_s5 += 1;
                    var_s3 += 2;
                } while (var_s5 < 5);
            }
        }
        var_s2_2 += 1;
        if (var_s2_2 < 0x20) {
            goto loop_8;
        }
        var_s6 += 1;
    } while (var_s6 < 0x48);
}
