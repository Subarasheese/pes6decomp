/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00129B00(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_a1;

    var_a1 = arg1;
    if (arg0 < var_a1) {

    } else {
        var_a1 = (arg2 >= arg0) ? arg0 : arg2;
    }
    return var_a1;
}
