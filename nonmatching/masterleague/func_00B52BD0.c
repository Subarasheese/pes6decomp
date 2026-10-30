/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00B85930[];

s32 func_00B52BD0(s32 arg0, s32 arg1) {
    M2C_UNK *var_a1;
    s16 temp_v0;
    s16 temp_v1;
    s32 temp_a0;
    s32 temp_a2;
    u32 var_a3;

    temp_a2 = arg0 & 0xFF;
    if (temp_a2 != 0) {
        temp_a0 = arg1 & 0xFF;
        if (temp_a0 == 0) {
            goto block_16;
        }
        var_a3 = 0;
        var_a1 = ((void *)D_00B85930);
loop_7:
        temp_v1 = M2C_FIELD(var_a1, s16 *, 0);
        if (temp_v1 != 0) {
            temp_v0 = M2C_FIELD(var_a1, s16 *, 2);
            if (temp_v0 != 0) {
                if ((temp_a2 == temp_v1) && (temp_a0 == temp_v0)) {
                    return 1;
                }
                if ((temp_a2 == temp_v0) && (temp_a0 == temp_v1)) {
                    return 1;
                }
                goto block_15;
            }
        }
block_15:
        var_a3 += 1;
        var_a1 += 4;
        if (var_a3 >= 0x10U) {
            goto block_16;
        }
        goto loop_7;
    }
block_16:
    return 0;
}
