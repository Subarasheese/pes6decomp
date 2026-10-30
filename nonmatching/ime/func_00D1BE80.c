/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s8 *func_00D1BE80(s8 *arg0, s8 *arg1, s32 arg2) {
    s32 var_a5;
    s8 *temp_v0;
    s8 *var_a0;
    s8 *var_a1;
    s8 temp_v1;

    var_a0 = arg0;
    var_a1 = arg1;
    var_a5 = 0;
    temp_v0 = var_a0;
    if (arg2 <= 0) {
        *var_a0 = 0;
        return NULL;
    }
loop_6:
    temp_v1 = *var_a1;
    if (temp_v1 != 0) {
        if (((((s64) ((s64) temp_v1 << 0x38) >> 0x38) & 0xC0) != 0x80) && (var_a5 += 1, ((arg2 < var_a5) != 0))) {
            *var_a0 = 0;
        } else {
            *var_a0 = temp_v1;
            var_a1 += 1;
            var_a0 += 1;
            goto loop_6;
        }
    }
    *var_a0 = 0;
    return temp_v0;
}
