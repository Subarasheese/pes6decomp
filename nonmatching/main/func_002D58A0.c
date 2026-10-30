/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s16 func_002D58A0(void *arg0) {
    s16 temp_a1;
    s16 temp_a2;
    s16 temp_a3;
    s16 temp_v0;
    s16 var_v0;
    s32 temp_lo;

    var_v0 = 0;
    if (arg0 != NULL) {
        temp_v0 = M2C_FIELD(arg0, s16 *, 6);
        temp_a1 = M2C_FIELD(arg0, s16 *, 4) + 1;
        temp_a2 = M2C_FIELD(arg0, s16 *, 0);
        temp_a3 = M2C_FIELD(arg0, s16 *, 2);
        if (temp_a1 < temp_v0) {
            temp_lo = (s32) (temp_a3 - temp_a2) / (s32) (temp_v0 - temp_a1);
            var_v0 = temp_a2 + temp_lo;
            if ((temp_lo < 0) && (var_v0 < temp_a3)) {
                goto block_9;
            }
            if (temp_lo <= 0) {
                M2C_FIELD(arg0, s16 *, 4) = temp_a1;
            } else {
                if (temp_a3 < var_v0) {
block_9:
                    var_v0 = temp_a3;
                }
                M2C_FIELD(arg0, s16 *, 4) = temp_a1;
            }
        } else {
            var_v0 = temp_a3;
        }
        M2C_FIELD(arg0, s16 *, 0) = var_v0;
    }
    return var_v0;
}
