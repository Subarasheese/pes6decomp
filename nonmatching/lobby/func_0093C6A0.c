/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0093C850(s32);
s32 func_00947690(s32);                             /* extern */
s32 func_009489B0(s32);                             /* extern */
s32 func_00948BC0();                                /* extern */

s32 func_0093C6A0(s32 arg0) {
    s32 temp_s0;
    s32 var_s1;
    s32 var_s2;

    temp_s0 = func_009489B0(func_00948BC0()) & 0xFF;
    var_s1 = 0;
    var_s2 = 0;
loop_7:
    if (var_s2 >= temp_s0) {
        return 0;
    }
    if (func_0093C850(var_s2) == 1) {
        if (var_s1 != arg0) {
            var_s1 += 1;
            goto block_6;
        }
        return func_00947690(var_s2);
    }
block_6:
    var_s2 += 1;
    goto loop_7;
}
