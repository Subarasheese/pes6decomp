/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00152D20(s32);                             /* extern */
s32 func_00153638(void *);                          /* extern */

s32 func_00153E30(void *arg0, s32 arg1) {
    s32 var_s0;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    s32 var_v0;

    var_s4 = 0;
    var_s3 = 0;
    var_s0 = arg1;
    if (M2C_FIELD(arg0, s32 *, 0xC) > 0) {
        var_s2 = 0;
loop_2:
        if ((func_00152D20(M2C_FIELD(arg0, s32 *, 0) + var_s2) == 0) || (var_s4 = 1, var_s0 -= 1, var_v0 = 1, (var_s0 > 0))) {
            var_s3 += 1;
            var_s2 += 0x14;
            if (var_s3 >= M2C_FIELD(arg0, s32 *, 0xC)) {
                goto block_5;
            }
            goto loop_2;
        }
    } else {
block_5:
        var_v0 = (func_00153638(arg0) == 0) ? var_s4 : 1;
    }
    return var_v0;
}
