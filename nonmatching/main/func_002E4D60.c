/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_002E4D60(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_a1;

    var_a1 = arg1;
    if (arg0 != 0) {
        if (var_a1 >= 2) {
            var_a1 = 1;
        } else if (var_a1 < 0) {
            var_a1 = 0;
        }
        M2C_FIELD(((var_a1 * 4) + arg0), s32 *, 0x10) = arg2;
    }
}
