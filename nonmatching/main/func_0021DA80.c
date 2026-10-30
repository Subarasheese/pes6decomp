/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_0021DA80(s32 *arg0, s16 arg1, void *arg2, s32 arg3, s32 arg4) {
    s16 var_a6;
    s16 var_a7;
    s32 *var_a0;
    s32 temp_a5;
    s32 var_v0;
    void *var_a2;

    var_a0 = arg0;
    var_a2 = arg2;
    var_v0 = 0;
    if (var_a2 != NULL) {
        var_a7 = 0;
        if (arg4 > 0) {
loop_2:
            temp_a5 = *var_a0;
            var_a6 = arg1;
            if (arg1 < temp_a5) {
loop_4:
                if (var_v0 < arg3) {
                    M2C_FIELD(var_a2, s16 *, 0) = var_a7;
                    var_v0 += 1;
                    M2C_FIELD(var_a2, s16 *, 2) = var_a6;
                    var_a6 += 1;
                    var_a2 += 4;
                    if (var_a6 >= temp_a5) {
                        goto block_6;
                    }
                    goto loop_4;
                }
            } else {
block_6:
                var_a7 += 1;
                var_a0 += 4;
                if (var_a7 < arg4) {
                    goto loop_2;
                }
            }
        }
    }
}
