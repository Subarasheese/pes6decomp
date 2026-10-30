/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002293F0(void);
s32 func_00236680(s32);                             /* extern */

s32 func_00AFD280(s32 arg0) {
    s32 temp_s2;
    s32 temp_v0;
    s32 var_a0;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_v1_2;
    u8 *var_a0_2;
    u8 *var_v1;
    u8 temp_v0_2;
    u8 temp_v0_3;

    temp_v0 = func_002293F0();
    if (temp_v0 != 0) {
        temp_s2 = arg0 & 0xFF;
        var_s1 = 0;
loop_5:
        var_a0 = 0;
        var_v1 = temp_v0 + (func_00236680((var_s1 + 5) & 0xFF) & 0xFF);
loop_6:
        temp_v0_2 = *var_v1;
        if (((s32) temp_v0_2 < 0x48) && (temp_v0_2 == temp_s2)) {
            return 1;
        }
        var_a0 += 1;
        var_v1 += 1;
        if (var_a0 >= 4) {
            var_s1 += 1;
            if (var_s1 >= 4) {
                var_s1_2 = 0;
loop_12:
                var_v1_2 = 0;
                var_a0_2 = temp_v0 + (func_00236680((var_s1_2 + 9) & 0xFF) & 0xFF);
loop_13:
                temp_v0_3 = *var_a0_2;
                if (((s32) temp_v0_3 < 0x48) && (temp_v0_3 == temp_s2)) {
                    return 1;
                }
                var_v1_2 += 1;
                var_a0_2 += 1;
                if (var_v1_2 >= 4) {
                    var_s1_2 += 1;
                    if (var_s1_2 >= 4) {
                        goto block_18;
                    }
                    goto loop_12;
                }
                goto loop_13;
            }
            goto loop_5;
        }
        goto loop_6;
    }
block_18:
    return 0;
}
