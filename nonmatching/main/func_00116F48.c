/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00116E30(s32, s32);                        /* extern */

s32 func_00116F48(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s3;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_v0;

    temp_s3 = (s32) ((arg0 > -1) ? arg0 : (arg0 + 0x7F)) >> 7;
    var_s2 = arg1;
    var_s1 = arg2;
    var_s0 = 0;
    if (temp_s3 > 0) {
loop_2:
        var_v0 = func_00116E30(var_s2, var_s1);
        var_s0 += 1;
        if (var_v0 >= 0) {
            var_s2 += 0x80;
            var_s1 += 3;
            if (var_s0 >= temp_s3) {
                goto block_4;
            }
            goto loop_2;
        }
    } else {
block_4:
        var_v0 = 0;
    }
    return var_v0;
}
