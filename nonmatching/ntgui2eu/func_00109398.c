/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00109398(s32 *arg0, s32 arg1, s32 arg2) {
    s32 *temp_v0;
    s32 *var_a3;
    s32 temp_a4;
    s32 var_a4;
    s32 var_a5;
    s32 var_a6;

    var_a4 = 0;
    var_a5 = arg2 > 0;
    if (var_a5 != 0) {
        var_a3 = arg0;
        var_a6 = 0;
loop_2:
        temp_v0 = var_a6 + arg1;
        *var_a3 = *temp_v0;
        var_a6 += 4;
        if (*temp_v0 == 0) {
            if (var_a5 != 0) {
                do {
                    var_a4 += 1;
                    *var_a3 = 0;
                    var_a3 += 4;
                } while (var_a4 < arg2);
            }
            return 0;
        }
        var_a4 += 1;
        var_a5 = var_a4 < arg2;
        var_a3 += 4;
        if (var_a5 == 0) {
            /* Duplicate return node #8. Try simplifying control flow for better match */
            temp_a4 = var_a4 - 1;
            *((temp_a4 * 4) + arg0) = 0;
            return -temp_a4;
        }
        goto loop_2;
    }
    temp_a4 = var_a4 - 1;
    *((temp_a4 * 4) + arg0) = 0;
    return -temp_a4;
}
