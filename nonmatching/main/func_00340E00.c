/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CB5F20[];
extern char D_00CB5F24[];

s32 func_00340E00(M2C_UNK **arg0, s32 arg1, s32 arg2) {
    s32 temp_a4;
    s32 var_a6;
    s32 var_a7;
    u8 temp_v0;
    void *var_a5;

    temp_a4 = arg1 & 0xFF;
    var_a7 = 0;
    var_a6 = 0;
loop_1:
    var_a5 = ((void *)D_00CB5F20) + (var_a7 << 6);
    if (temp_a4 == M2C_FIELD(var_a5, u8 *, 8)) {
        if (var_a6 != arg2) {
            var_a6 += 1;
loop_6:
            temp_v0 = M2C_FIELD(var_a5, u8 *, 8);
            if (temp_v0 != temp_a4) {
                if (temp_v0 == 0xFF) {
                    goto block_9;
                }
            } else {
block_9:
                var_a7 += 1;
                var_a5 += 0x40;
                if (var_a7 < 0xA) {
                    goto loop_6;
                }
            }
            goto block_10;
        }
        *arg0 = var_a5 + 4;
        return 1;
    }
block_10:
    var_a7 += 1;
    if (var_a7 >= 0xA) {
        *arg0 = ((void *)D_00CB5F24);
        return 0;
    }
    goto loop_1;
}
