/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00292AA0();                                /* extern */
s32 func_002BDC30(s32, s32, s32, s32);              /* extern */

s32 func_002BDB70(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;
    s32 temp_v1;
    s32 var_v0;

    if (func_00292AA0() != 0) {
        return func_002BDC30(arg0, arg1, arg2, arg3);
    }
    temp_v1 = arg0 + arg2;
    temp_v0 = arg1 + arg3;
    if (temp_v0 < temp_v1) {
        var_v0 = 0;
    } else if (temp_v1 >= temp_v0) {
        var_v0 = 2;
    } else {
        var_v0 = 1;
    }
    return var_v0;
}
