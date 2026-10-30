/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_001BC3D0(s32, s32, s32, s32);              /* extern */
extern char D_003AB4C0[];

void func_0026B610(s32 arg0, s32 *arg1, s32 *arg2, s32 arg3) {
    M2C_UNK *var_s1;
    s32 *var_s0;
    s32 *var_s2;
    s32 temp_a3;
    s32 var_s3;

    var_s3 = 0;
    if (arg3 > 0) {
        var_s2 = arg2;
        var_s0 = arg1;
        var_s1 = ((void *)D_003AB4C0);
        do {
            temp_a3 = *var_s2;
            if ((temp_a3 != 0) && (arg0 >= 0) && (arg0 < 8)) {
                *var_s0 = func_001BC3D0(arg0, M2C_FIELD(var_s1, s32 *, 0), M2C_FIELD(var_s1, s32 *, 4), temp_a3);
            } else {
                *var_s0 = -1;
            }
            var_s3 += 1;
            var_s2 += 4;
            var_s1 += 8;
            var_s0 += 4;
        } while (var_s3 < arg3);
    }
}
