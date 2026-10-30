/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_002F9950(s32 *arg0, s32 arg1, s32 arg2) {
    s32 *var_a3;
    s32 var_a4;

    if (arg0 != NULL) {
        var_a4 = 0;
        if (arg1 > 0) {
            var_a3 = arg0;
loop_3:
            if (arg2 != *var_a3) {
                var_a4 += 1;
                var_a3 += 0xC;
                if (var_a4 >= arg1) {
                    /* Duplicate return node #9. Try simplifying control flow for better match */
                    return 0;
                }
                goto loop_3;
            }
            return M2C_FIELD(((var_a4 * 0xC) + arg0), s32 *, 8);
        }
    }
    return 0;
}
