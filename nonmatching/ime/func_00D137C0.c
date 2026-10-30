/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00D137C0(void *arg0, s32 arg1) {
    s32 temp_a0;
    s32 var_a4;
    void *temp_a2;
    void *temp_a3;
    void *var_v0;

    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, void **, 0x164);
        if (var_v0 == NULL) {
            return NULL;
        }
        temp_a3 = arg0 + 0x168;
        if (var_v0 != temp_a3) {
            temp_a2 = arg0 + 0x10;
            if (var_v0 != temp_a2) {
                temp_a0 = M2C_FIELD(arg0, s32 *, 0);
                if (arg1 < temp_a0) {
                    var_a4 = 0;
loop_23:
                    if (var_a4 >= arg1) {
                        return var_v0;
                    }
                    if (var_v0 == NULL) {
                        return NULL;
                    }
                    if ((var_v0 != temp_a3) && (var_v0 != temp_a2)) {
                        if (var_a4 < temp_a0) {
                            var_v0 = M2C_FIELD(var_v0, void **, 0x154);
                            var_a4 += 1;
                            goto loop_23;
                        }
                        goto block_21;
                    }
block_21:
                    return NULL;
                }
                goto block_12;
            }
        }
block_12:
        return NULL;
    }
    return NULL;
}
