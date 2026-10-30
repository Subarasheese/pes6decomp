/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CB5F20[];
extern char D_00CB6164[];

s32 func_00340E90(M2C_UNK **arg0, void *arg1, s32 arg2) {
    M2C_UNK *var_a3;
    s32 var_a6;
    s32 var_a7;
    u8 temp_a1;
    u8 var_a5;
    void *temp_v1;
    void *var_a4;

    var_a7 = 0;
    var_a6 = 0;
    var_a3 = ((void *)D_00CB5F20);
loop_1:
    temp_v1 = var_a3 + 4;
    if (M2C_FIELD(var_a3, s32 *, 0x1C) != M2C_FIELD(arg1, s32 *, 0x18)) {
        var_a7 += 1;
        var_a3 += 0x40;
        if (var_a7 < 0xA) {
            goto loop_1;
        }
    }
    var_a5 = M2C_FIELD(temp_v1, u8 *, 4);
    var_a4 = ((void *)D_00CB5F20) + (var_a7 << 6);
loop_4:
    temp_a1 = M2C_FIELD(var_a4, u8 *, 8);
    if (((var_a5 & 0xFF) != temp_a1) && (temp_a1 != 0xFF)) {
        var_a6 += 1;
        if (var_a6 != arg2) {
            var_a5 = temp_a1;
            goto block_10;
        }
        *arg0 = var_a4 + 4;
        return 1;
    }
block_10:
    var_a7 += 1;
    var_a4 += 0x40;
    if (var_a7 >= 0xA) {
        *arg0 = ((void *)D_00CB6164);
        return 0;
    }
    goto loop_4;
}
