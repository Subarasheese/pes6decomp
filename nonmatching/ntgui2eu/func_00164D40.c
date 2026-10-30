/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00164CA8();                                /* extern */

s32 func_00164D40(M2C_UNK arg0, s32 *arg1) {
    s32 temp_a0;
    s32 temp_v0;
    s32 var_v0;
    s32 var_v0_2;

    temp_v0 = func_00164CA8();
    if (temp_v0 == -1) {
        *arg1 = 0;
        return -0x22;
    }
    var_v0 = temp_v0;
    if (temp_v0 >= 0x2121) {
        temp_a0 = ((s64) (((temp_v0 >> 8) - 0x21) * 0x5E00000000) >> 0x20) + ((temp_v0 & 0xFF) - 0x21);
        var_v0_2 = 1;
        if (temp_a0 >= 0x582) {
            var_v0_2 = 2;
            if (temp_a0 >= 0x1142) {
                var_v0_2 = 3;
            }
        }
        *arg1 = var_v0_2;
        var_v0 = temp_a0;
    }
    return var_v0;
}
