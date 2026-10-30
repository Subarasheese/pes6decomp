/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_002F9440(s32, s32);                        /* extern */
M2C_UNK func_002F9720(s32, s32, s32);               /* extern */
s32 func_002F97E0(s32);                             /* extern */

s32 func_0035ECA0(s32 arg0, s32 *arg1, s32 arg2) {
    s32 *var_s3;
    s32 temp_s0;
    s32 var_s1;

    var_s3 = arg1;
    temp_s0 = func_002F97E0(arg2);
    var_s1 = 0;
    if (arg2 > 0) {
        do {
            func_002F9720(temp_s0, var_s1, func_002F9440(arg0, *var_s3));
            var_s1 += 1;
            var_s3 += 4;
        } while (var_s1 < arg2);
    }
    return temp_s0;
}
