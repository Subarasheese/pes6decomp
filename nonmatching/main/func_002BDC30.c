/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s64 func_002928B0(M2C_UNK);                         /* extern */
s32 func_00292A30();                                /* extern */

s32 func_002BDC30(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_s0;
    s32 temp_s1;
    s32 var_s4;
    s32 var_s5;
    s64 temp_s2;
    s64 temp_s3;

    temp_s3 = (s64) (func_002928B0(0) << 0x30) >> 0x30;
    temp_s0 = arg1 + arg3;
    temp_s1 = arg0 + arg2;
    var_s4 = temp_s3 + temp_s1;
    temp_s2 = (s64) (func_002928B0(1) << 0x30) >> 0x30;
    var_s5 = temp_s2 + temp_s0;
    if ((func_00292A30() != 0) && (var_s4 == var_s5)) {
        var_s4 = temp_s1 + (temp_s3 * 2);
        var_s5 = temp_s2 + (temp_s0 * 2);
    }
    if (var_s5 < var_s4) {
        return 0;
    }
    if (var_s4 >= var_s5) {
        return 2;
    }
    return 1;
}
