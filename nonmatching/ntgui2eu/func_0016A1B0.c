/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_0016A1B0(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK (*temp_v0)(s32, s64, s32);
    void *var_s0;

    var_s0 = arg0;
    if (var_s0 != NULL) {
        do {
            temp_v0 = M2C_FIELD(var_s0, M2C_UNK (**)(s32, s64, s32), 0x10);
            if (temp_v0 != NULL) {
                temp_v0(arg1, M2C_FIELD(var_s0, s64 *, 8), arg2);
            }
            var_s0 = M2C_FIELD(var_s0, void **, 0);
        } while (var_s0 != NULL);
    }
}
