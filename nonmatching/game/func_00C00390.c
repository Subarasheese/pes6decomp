/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B2B30();                                /* extern */
s32 func_00B29CE0();                                /* extern */
s32 func_00B29D20();                                /* extern */
s32 func_00B29D60();                                /* extern */
s32 func_00B29DA0();                                /* extern */

s32 func_00C00390(s32 arg0) {
    s32 var_s0;

    var_s0 = 9;
    if (func_00B29D20() != 0) {
        goto block_1;
    }
    if ((func_00B29CE0() == 0) && (func_00B29D60() == 0) && (func_00B29DA0() == 0)) {
        if ((arg0 != 2) && (arg0 != 3)) {

        } else {
            var_s0 = func_009B2B30();
        }
    } else {
block_1:
        var_s0 = 5;
    }
    return var_s0;
}
