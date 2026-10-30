/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002293F0(void);
s16 func_002290D0(u8);                              /* extern */
s32 func_00236680(s32);                             /* extern */

s32 func_00B0C0E0(s16 *arg0) {
    s16 *var_s5;
    s32 temp_s0;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    u8 *var_s1;

    var_s5 = arg0;
    temp_s0 = func_002293F0();
    var_s2 = 0;
    var_s4 = 0;
    do {
        var_s3 = 0;
        var_s1 = temp_s0 + (func_00236680((var_s4 + 8) & 0xFF) & 0xFF);
loop_2:
        *var_s5 = func_002290D0(*var_s1);
        var_s3 += 1;
        var_s2 += 1;
        var_s5 += 2;
        var_s1 += 1;
        if (var_s3 < 4) {
            goto loop_2;
        }
        var_s4 += 1;
    } while (var_s4 < 2);
    return var_s2;
}
