/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0016B3F0(s32, void *, void *, void *); /* extern */

void func_00168740(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_a0_2;
    void *temp_a0;
    void *temp_v1;
    void *var_a0;
    void *var_a0_2;
    void *var_a4;

    var_a4 = NULL;
    if (arg1 != arg2) {
        temp_a0 = arg0 + 0x840;
        var_a0 = M2C_FIELD(temp_a0, void **, 8);
loop_2:
        if (var_a0 != temp_a0) {
            if (arg1 != M2C_FIELD(var_a0, s32 *, 0x10)) {
                var_a0 = M2C_FIELD(var_a0, void **, 8);
                goto loop_2;
            }
            var_a4 = var_a0;
        }
        var_a0_2 = temp_a0;
        if (var_a4 != NULL) {
loop_8:
            temp_v1 = M2C_FIELD(var_a0_2, void **, 8);
            if (temp_v1 != temp_a0) {
                var_a0_2 = temp_v1;
                if (arg2 == M2C_FIELD(temp_v1, s32 *, 0x10)) {
                    temp_a0_2 = M2C_FIELD(temp_v1, s32 *, 8);
                    if (temp_a0_2 != var_a4) {
                        func_0016B3F0(temp_a0_2, var_a4, temp_a0, var_a4);
                    }
                } else {
                    goto loop_8;
                }
            }
        }
    }
}
