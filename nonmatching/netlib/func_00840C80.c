/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00828160();                                /* extern */
s32 func_00D0BAF0();                                /* extern */

s32 func_00840C80(void) {
    s32 *var_v0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s1;
    s32 var_v0_2;
    s32 var_v1;

    temp_v0 = func_00828160();
    if (temp_v0 != 0) {
        var_s1 = 0;
loop_27:
        if (var_s1 >= 8) {
            goto block_28;
        }
        temp_v0_2 = func_00D0BAF0();
        if (temp_v0_2 != 0) {
            var_v1 = temp_v0_2 + 0xF8A4;
        } else {
            var_v1 = 0;
        }
        if (var_v1 == 0) {
            var_v0 = NULL;
        } else if (var_s1 < 0) {
            var_v0 = NULL;
        } else if (var_s1 < 8) {
            var_v0 = var_v1 + (var_s1 * 0xB8);
        } else {
            var_v0 = NULL;
        }
        if (var_v0 != NULL) {
            var_v0_2 = *var_v0;
        } else {
            var_v0_2 = 0;
        }
        if (temp_v0 != var_v0_2) {
            var_s1 += 1;
            goto loop_27;
        }
        return var_s1;
    }
block_28:
    return 4;
}
