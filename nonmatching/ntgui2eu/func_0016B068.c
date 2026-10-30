/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_0016B068(s32 arg0, void *arg1, s32 arg2) {
    M2C_UNK (*temp_v0)(s32, s32);
    s32 temp_a1;
    s32 var_s1;
    void *var_s0;

    var_s0 = arg1;
    if (arg2 > 0) {
        var_s1 = arg2;
        do {
            temp_a1 = M2C_FIELD(var_s0, s32 *, 0x10);
            if (temp_a1 != 0) {
                temp_v0 = M2C_FIELD(var_s0, M2C_UNK (**)(s32, s32), 8);
                if (temp_v0 != NULL) {
                    temp_v0(arg0 + M2C_FIELD(var_s0, s32 *, 0xC), temp_a1);
                }
            }
            var_s1 -= 1;
            var_s0 += 0x14;
        } while (var_s1 != 0);
    }
}
