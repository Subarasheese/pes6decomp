/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 _malloc_r(M2C_UNK);                         /* extern */

s32 func_001C73D8(void *arg0) {
    s32 *var_v0_2;
    s32 temp_v0;
    s32 var_v0;
    s32 var_v1;

    if (M2C_FIELD(arg0, s32 *, 0x1D4) == 0) {
        temp_v0 = _malloc_r(0x80);
        var_v0 = -1;
        M2C_FIELD(arg0, s32 *, 0x1D4) = temp_v0;
        if (temp_v0 != 0) {
            var_v0_2 = temp_v0 + 0x7C;
            var_v1 = 0x1F;
            do {
                var_v1 -= 1;
                *var_v0_2 = 0;
                var_v0_2 -= 4;
            } while (var_v1 >= 0);
            goto block_4;
        }
    } else {
block_4:
        var_v0 = 0;
    }
    return var_v0;
}
