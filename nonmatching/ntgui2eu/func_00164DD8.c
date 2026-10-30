/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00164DD8(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK (*temp_v0)(s32, s32);
    void *temp_a0;
    void *var_s0;

    var_s0 = arg0;
    do {
        temp_v0 = M2C_FIELD(var_s0, M2C_UNK (**)(s32, s32), 0x60);
        if (temp_v0 != NULL) {
            temp_v0(arg1, arg2);
        }
        temp_a0 = M2C_FIELD(var_s0, void **, 0);
        var_s0 = temp_a0;
    } while (temp_a0 != NULL);
}
