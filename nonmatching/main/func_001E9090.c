/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_0014AEE0(s32, s32);                        /* extern */
s32 func_001540C0();                                /* extern */
M2C_UNK func_001540D0(s32);                         /* extern */
s32 func_001E6D00(s32);                             /* extern */
s32 func_001E6E10(s32);                             /* extern */

s32 func_001E9090(s32 arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v0;
    s32 var_s2;

    temp_s1 = func_001540C0();
    var_s2 = 0;
    if (func_001E6E10(arg0) != 0) {
        temp_s0 = func_001540C0();
        func_001540D0(temp_s1);
        temp_v0 = func_0014AEE0(arg0, arg1);
        if (temp_v0 != 0) {
            var_s2 = func_001E6D00(temp_v0);
        }
        func_001540D0(temp_s0);
    }
    return var_s2;
}
