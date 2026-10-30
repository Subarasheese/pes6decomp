/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 *func_001AC548(s32 *arg0, s32 arg1) {
    s32 *var_a0;
    s32 *var_v0;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a3;
    void *var_v0_2;

    var_a0 = arg0;
    var_a3 = *var_a0;
    var_v0 = NULL;
    if (var_a3 != 0) {
loop_2:
        var_v0_2 = var_a0 + var_a3;
        if (M2C_FIELD(var_a0, s32 *, 4) != 0) {
            temp_v0 = M2C_FIELD(var_a0, s32 *, 8);
            if ((temp_v0 == 0) || (var_v0 = var_a0, (((u32) (arg1 - temp_v0) < (u32) M2C_FIELD(var_a0, u32 *, 0xC)) == 0))) {
                var_v0_2 = var_a0 + var_a3;
                goto block_6;
            }
        } else {
block_6:
            var_a0 = var_v0_2 + 4;
            temp_v1 = M2C_FIELD(var_v0_2, s32 *, 4);
            var_a3 = temp_v1;
            if (temp_v1 == 0) {
                var_v0 = NULL;
            } else {
                goto loop_2;
            }
        }
    }
    return var_v0;
}
