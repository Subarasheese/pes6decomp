/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001C80F0(u8 *, M2C_UNK);                   /* extern */

s32 func_00D1C740(u8 *arg0, s32 arg1) {
    s32 var_a3;
    u8 *var_a2;
    u8 temp_v0;

    var_a3 = 0;
    var_a2 = arg0;
    if (arg1 < -1) {
        return 0;
    }
    if (arg1 == -1) {
        return func_001C80F0(var_a2, 0);
    }
loop_13:
    temp_v0 = *var_a2;
    if (temp_v0 != 0) {
        if (arg1 != var_a3) {
            if ((s32) temp_v0 >= 0xA1) {
                if ((s32) temp_v0 < 0xE0) {
                    var_a2 += 1;
                } else {
                    goto block_8;
                }
            } else {
block_8:
                if (((s32) temp_v0 >= 0x20) && ((s32) temp_v0 < 0x7F)) {
                    var_a2 += 1;
                } else {
                    var_a2 += 2;
                }
            }
            var_a3 += 1;
            goto loop_13;
        }
    }
    return var_a2 - arg0;
}
