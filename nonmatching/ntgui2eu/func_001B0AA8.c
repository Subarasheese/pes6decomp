/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s8 *func_001B0AA8(s8 *arg0, s8 *arg1) {
    s32 var_a3;
    s8 *var_a0;
    s8 temp_v1;

    var_a0 = arg0;
    if (*var_a0 == 0) {
        return (*arg1 == 0) ? var_a0 : NULL;
    }
loop_3:
    if (*arg1 != 0) {
        if (*arg1 == *var_a0) {
            var_a3 = 1;
loop_6:
            temp_v1 = *(arg1 + var_a3);
            if (temp_v1 != 0) {
                if (temp_v1 == *(var_a0 + var_a3)) {
                    var_a3 += 1;
                    goto loop_6;
                }
                goto block_10;
            }
            /* Duplicate return node #2. Try simplifying control flow for better match */
            return var_a0;
        }
block_10:
        var_a0 += 1;
        if (*var_a0 != 0) {
            goto loop_3;
        }
        return NULL;
    }
    return var_a0;
}
