/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00D13750(void *arg0, s32 arg1) {
    s32 var_a4;
    void *var_v0;

    var_a4 = 0;
    if (arg0 == NULL) {
        goto block_14;
    }
    var_v0 = M2C_FIELD(arg0, void **, 0x164);
loop_8:
    if ((var_v0 != NULL) && (var_v0 != (arg0 + 0x168)) && (var_v0 != (arg0 + 0x10))) {
        if (var_a4 < M2C_FIELD(arg0, s32 *, 0)) {
            if (M2C_FIELD(var_v0, s32 *, 8) != arg1) {
                var_v0 = M2C_FIELD(var_v0, void **, 0x154);
                var_a4 += 1;
                goto loop_8;
            }
            return var_v0;
        }
        goto block_14;
    }
block_14:
    return NULL;
}
