/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 *func_00832190();                               /* extern */
s32 func_00936B90();                                /* extern */

void func_0095D210(void) {
    s32 *var_a1;
    s32 *var_s0;
    s32 temp_v0;
    s32 var_a0;

    temp_v0 = func_00936B90();
    if (temp_v0 == 0) {
        var_s0 = NULL;
    } else {
        var_s0 = temp_v0 + 0x3F1A4;
    }
    var_a1 = func_00832190();
    if (var_s0 != NULL) {
        if (var_a1 == NULL) {
            return;
        }
        var_a0 = 0x147;
        do {
            var_a0 -= 1;
            *var_a1 = *var_s0;
            var_s0 += 4;
            var_a1 += 4;
        } while (var_a0 > 0);
    }
}
