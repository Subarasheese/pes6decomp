/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_002DB400(s32, s32, s32, s32);
s32 func_002DB940(s32);

s32 func_009EEDD0(void *arg0, s32 arg1) {
    s32 temp_s2;
    s32 temp_v0;
    s32 var_s0;
    s32 var_s1;

    temp_s2 = *M2C_FIELD(arg0, s32 **, 0x38);
    if (arg1 < 0) {
        var_s1 = -arg1;
    } else {
        var_s1 = 0;
    }
    if (arg1 > 0) {
        var_s0 = arg1;
    } else {
        var_s0 = 0;
    }
    temp_v0 = func_002DB940(temp_s2);
    return temp_v0 != func_002DB400(temp_s2, temp_v0, var_s1 & 0xFF, var_s0 & 0xFF);
}
