/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_002F82D0(M2C_UNK, s32, s32, M2C_UNK);    /* extern */

s32 func_002F8140(s32 arg0) {
    s32 var_s0;
    s32 var_v1;
    void *temp_v0;

    var_s0 = 0;
    if (0 < 4) {
loop_1:
        temp_v0 = func_002F82D0(0, arg0, var_s0, 0);
        if (temp_v0 == NULL) {
            var_v1 = 0;
        } else {
            var_v1 = 1;
            if (M2C_FIELD(temp_v0, u8 *, 0x3B) == 1) {

            } else {
                var_v1 = 0;
            }
        }
        if (var_v1 != 1) {
            var_s0 += 1;
            if (var_s0 >= 4) {
                goto block_12;
            }
            goto loop_1;
        }
        return 1;
    }
block_12:
    return 0;
}
