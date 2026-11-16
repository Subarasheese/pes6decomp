/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

s16 func_002D58A0(void *arg0) {
    s32 a1;
    s32 a2;
    s32 a3;
    s32 lo;
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        a1 = M2C_FIELD(arg0, s16 *, 4) + 1;
        a2 = M2C_FIELD(arg0, s16 *, 0);
        a3 = M2C_FIELD(arg0, s16 *, 2);
        if (a1 < M2C_FIELD(arg0, s16 *, 6)) {
            lo = (a3 - a2) / (M2C_FIELD(arg0, s16 *, 6) - a1);
            var_v0 = a2 + lo;
            if (lo < 0 && var_v0 < a3) {
                var_v0 = a3;
                M2C_FIELD(arg0, s16 *, 4) = a1;
            } else if (lo <= 0) {
                M2C_FIELD(arg0, s16 *, 4) = a1;
            } else {
                if (a3 < var_v0) {
                    var_v0 = a3;
                }
                M2C_FIELD(arg0, s16 *, 4) = a1;
            }
        } else {
            var_v0 = a3;
        }
        M2C_FIELD(arg0, s16 *, 0) = var_v0;
    }
    return var_v0;
}
