/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003EA6C0;

s32 func_008FA980(s32 arg0) {
    s32 *temp_a1;
    s32 var_v0;
    void *var_a2;

    var_a2 = D_003EA6C0;
    var_v0 = 0;
    temp_a1 = var_a2 + 0x20;
    if (M2C_FIELD(var_a2, s32 *, 0x20) > 0) {
loop_1:
        if (M2C_FIELD(var_a2, s32 *, 0x108) != arg0) {
            var_v0 += 1;
            var_a2 += 4;
            if (var_v0 >= *temp_a1) {
                goto block_6;
            }
            goto loop_1;
        }
        return var_v0;
    }
block_6:
    return -1;
}
