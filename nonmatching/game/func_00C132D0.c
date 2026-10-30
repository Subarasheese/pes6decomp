/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00C132D0(s32 arg0, s32 arg1) {
    s32 temp_v1;
    s32 var_v0;

    if ((arg0 != -1) && (arg1 != -1)) {
        temp_v1 = arg0 - arg1;
        var_v0 = temp_v1 >> 2;
        if (temp_v1 < 0) {
            return (s32) (temp_v1 + 3) >> 2;
        }
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return var_v0;
    }
    var_v0 = 0;
    return var_v0;
}
