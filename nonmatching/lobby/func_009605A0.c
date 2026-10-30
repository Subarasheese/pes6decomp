/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009602B0();                                /* extern */
s32 func_00960370();                                /* extern */

s32 func_009605A0(s32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v1;
    s32 var_v1_2;

    temp_v0 = func_009602B0();
    if (arg0 == 0) {
        var_v1 = 1;
    } else if (temp_v0 == 0) {
        var_v1 = 1;
    } else if (arg0 != temp_v0) {
        var_v1 = 1;
    } else {
        var_v1 = 4;
    }
    if (var_v1 == 4) {
        return 2;
    }
    temp_v0_2 = func_00960370();
    if (arg0 == 0) {
        var_v1_2 = 1;
    } else if (temp_v0_2 == 0) {
        var_v1_2 = 1;
    } else if (arg0 != temp_v0_2) {
        var_v1_2 = 1;
    } else {
        var_v1_2 = 4;
    }
    if (var_v1_2 != 4) {
        return 0;
    }
    return 1;
}
