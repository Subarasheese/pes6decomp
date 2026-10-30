/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0063CA40(M2C_UNK);                         /* extern */

s32 func_006223F0(s32 *arg0) {
    s32 *var_s1;
    s32 temp_s4;
    s32 var_s2;
    void *temp_s0;

    if (M2C_FIELD(arg0, u8 *, 0x30) == 4) {
        return 0;
    }
    if (M2C_FIELD(arg0, u8 *, 0x20) != 1) {
        return 0;
    }
    var_s2 = 0;
    var_s1 = arg0;
loop_6:
    temp_s0 = arg0 + var_s2;
    if (M2C_FIELD(temp_s0, u8 *, 0x28) != 1) {
        temp_s4 = *var_s1;
        if (temp_s4 < func_0063CA40(5)) {
            if (M2C_FIELD(temp_s0, u8 *, 0x30) != 4) {
                var_s2 += 1;
                var_s1 += 4;
                if (var_s2 >= 8) {
                    return 1;
                }
                goto loop_6;
            }
            goto block_15;
        }
block_15:
        return 0;
    }
    return 0;
}
