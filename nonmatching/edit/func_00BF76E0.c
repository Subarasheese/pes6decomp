/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CEB720[];

s32 func_00BF76E0(s32 arg0) {
    s32 var_a3;
    s32 var_a4;
    void **temp_v0;
    void *var_a0;
    void *var_a1;
    void *var_a2;

    temp_v0 = ((void *)D_00CEB720) + ((0 % 2) * 0x14);
    if (temp_v0 == NULL) {
        var_a1 = NULL;
    } else {
        var_a1 = *temp_v0;
    }
    if (var_a1 != NULL) {
        var_a4 = 0;
        var_a2 = var_a1;
loop_9:
        var_a3 = 0;
        var_a0 = var_a2;
loop_10:
        if ((arg0 & 0xFFFF) != M2C_FIELD(var_a0, s32 *, 0x1944)) {
            var_a3 += 1;
            var_a0 += 4;
            if (var_a3 >= 0x14) {
                var_a4 += 1;
                var_a2 += 0x4A4;
                if (var_a4 >= 0x14) {
                    goto block_16;
                }
                goto loop_9;
            }
            goto loop_10;
        }
        return M2C_FIELD(((var_a3 * 4) + ((var_a4 * 0x4A4) + var_a1)), s32 *, 0x1994);
    }
block_16:
    return 1;
}
