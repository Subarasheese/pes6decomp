/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B32D0(M2C_UNK);                         /* extern */

s32 func_00A10A70(void *arg0, s32 arg1) {
    f32 temp_f1;
    s32 var_a1;
    s32 var_v0;

    var_a1 = arg1;
    temp_f1 = M2C_FIELD(arg0, f32 *, 0xE8);
    if (temp_f1 < -7193.0f) {
        if ((var_a1 & 0xFFFF) < 0x8001) {
            var_v0 = func_009B32D0(0xC000);
            goto block_6;
        }
        goto block_3;
    }
block_3:
    if (!(temp_f1 <= 7193.0f) && ((var_a1 & 0xFFFF) >= 0x8000)) {
        var_v0 = func_009B32D0(0x4000);
block_6:
        var_a1 = var_v0 & 0xFFFF;
    }
    return var_a1;
}
