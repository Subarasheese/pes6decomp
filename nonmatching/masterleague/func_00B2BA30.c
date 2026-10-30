/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00228A80(void);
s32 func_00B2BA30(s32 arg0) {
    s32 temp_a1;
    s32 var_a0_2;
    s32 var_a2;
    void *var_a0;
    void *var_v0;

    var_v0 = func_00228A80();
    if (var_v0 != NULL) {
        temp_a1 = arg0 & 0xFFFF;
        var_a2 = 0;
        var_a0 = var_v0;
loop_5:
        if (temp_a1 != M2C_FIELD(var_a0, u16 *, 0x336BE)) {
            var_a2 += 1;
            var_a0 += 2;
            if (var_a2 >= 0x15E) {
                var_a0_2 = 0;
loop_11:
                if (temp_a1 != M2C_FIELD(var_v0, u16 *, 0x3397A)) {
                    var_a0_2 += 1;
                    var_v0 += 2;
                    if (var_a0_2 >= 0x32) {
                        goto block_16;
                    }
                    goto loop_11;
                }
                return 1;
            }
            goto loop_5;
        }
        return 1;
    }
block_16:
    return 0;
}
