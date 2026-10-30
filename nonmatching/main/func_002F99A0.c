/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001EDC80(s32, s32);                        /* extern */

void func_002F99A0(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_s2;
    s32 temp_s5;
    s32 var_s1;
    void *var_s0;

    temp_s2 = M2C_FIELD(arg0, s32 *, 8);
    var_s1 = 0;
    if (arg1 > 0) {
        var_s0 = arg0;
        do {
            if (M2C_FIELD(var_s0, M2C_UNK (**)(s32, s32, s32, s32), 4) != NULL) {
                temp_s5 = M2C_FIELD(var_s0, s32 *, 0);
                M2C_FIELD(var_s0, M2C_UNK (**)(s32, s32, s32, s32), 4)(func_001EDC80(arg2, temp_s5), temp_s5, M2C_FIELD(var_s0, s32 *, 8), temp_s2);
            }
            var_s1 += 1;
            var_s0 += 0xC;
        } while (var_s1 < arg1);
    }
}
