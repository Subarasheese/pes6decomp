/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


u32 func_0011835C(void *arg0, s32 arg1) {
    s32 var_a2;
    s32 var_a3;
    u32 temp_a4;
    u32 var_v0;
    u32 var_v1;

    temp_a4 = M2C_FIELD(arg0, u32 *, 0x68);
    var_a3 = 0;
    var_v1 = 0;
    if (temp_a4 != 0) {
        var_a2 = 0;
loop_2:
        var_a2 += 0x198;
        if (M2C_FIELD((var_a2 + M2C_FIELD(arg0, s32 *, 0x78)), u8 *, 0x18C) & 0x20) {
            var_v0 = var_v1;
            if (arg1 != var_a3) {
                var_a3 += 1;
                goto block_5;
            }
        } else {
block_5:
            var_v1 += 1;
            if (var_v1 >= temp_a4) {
                goto block_6;
            }
            goto loop_2;
        }
    } else {
block_6:
        var_v0 = -1U;
    }
    return var_v0;
}
