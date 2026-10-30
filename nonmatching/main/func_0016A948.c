/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001C80F0();                                /* extern */

void func_0016A948(u8 *arg0) {
    u32 temp_v0;
    u32 var_a2;
    u8 *var_a0;
    u8 temp_v0_2;

    temp_v0 = func_001C80F0() + 1;
    var_a2 = 0;
    if (temp_v0 != 0) {
        var_a0 = arg0;
        do {
            var_a2 += 1;
            temp_v0_2 = *var_a0;
            if ((u32) (temp_v0_2 - 0x61) < 0x1AU) {
                *var_a0 = temp_v0_2 - 0x20;
            }
            var_a0 = arg0 + var_a2;
        } while (var_a2 < temp_v0);
    }
}
