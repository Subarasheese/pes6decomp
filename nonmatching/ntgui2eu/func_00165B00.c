/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00163C30(void *, s32);
void *func_00165B00(void *arg0) {
    void *temp_a0;
    void *var_v0;

    var_v0 = M2C_FIELD(arg0, void **, 0x54);
    if (var_v0 == NULL) {
        temp_a0 = M2C_FIELD(arg0, void **, 0x50);
        if (temp_a0 != NULL) {
            var_v0 = func_00165B00(temp_a0);
            M2C_FIELD(arg0, void **, 0x54) = var_v0;
        } else {
            var_v0 = (func_00163C30(arg0, *(s32 *)0x5BFE2C) == 0) ? NULL : arg0;
        }
    }
    return var_v0;
}
