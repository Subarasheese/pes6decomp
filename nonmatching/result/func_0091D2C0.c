/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00828160();                                /* extern */
s32 func_00836970(s32);                             /* extern */
s32 func_00836D70();                                /* extern */
s32 func_008375D0();                                /* extern */
s32 func_008376E0();                                /* extern */
s32 func_00837940();                                /* extern */
s32 func_00837980();                                /* extern */
s32 func_00837A40(s32);                             /* extern */
s32 func_00838290(s32);                             /* extern */

s32 func_0091D2C0(s32 arg0) {
    s32 temp_v0;
    s32 var_s1;
    s32 var_v0;
    s32 var_v1;

    if (arg0 >= 0) {
        temp_v0 = arg0 < 2;
        if (temp_v0 == 0) {
            return 4;
        }
        if (arg0 < 0) {
            var_v1 = 0;
        } else if (temp_v0 == 0) {
            var_v1 = 0;
        } else if (func_008375D0() == 0) {
            var_v1 = 0;
        } else if (func_00836D70() != 0) {
            var_v1 = 0;
        } else if (func_00837940() == 1) {
            var_v1 = 2;
        } else {
            var_v1 = 1;
            if (func_00837980() == 1) {
                if (arg0 != func_008376E0()) {
                    var_v1 = 0;
                } else {
                    var_v1 = 1;
                }
            }
        }
        if (var_v1 != 1) {
            goto block_35;
        }
        if (arg0 != func_008376E0()) {
            var_v0 = func_00838290(func_00837A40(arg0));
        } else {
            var_v0 = func_00828160();
        }
        if (var_v0 != 0) {
            var_s1 = 0;
loop_30:
            if (var_v0 != func_00836970(var_s1)) {
                var_s1 += 1;
                if (var_s1 >= 4) {
                    goto block_35;
                }
                goto loop_30;
            }
            return var_s1;
        }
        goto block_35;
    }
block_35:
    return 4;
}
