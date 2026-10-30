/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_002F3850(s32);                             /* extern */

s32 func_00AECF00(s32 *arg0) {
    s32 temp_a0;
    s32 var_s0;

    var_s0 = 1;
    if (arg0 != NULL) {
        temp_a0 = *arg0;
        if ((temp_a0 != 0) && (func_002F3850(temp_a0) != 2)) {
            var_s0 = 0;
        }
    }
    return var_s0;
}
