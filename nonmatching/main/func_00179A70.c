/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00179788(void *);
extern char D_003CC718[];
extern char D_003CC740[];
extern char D_003CC748[];
extern char D_00510D20[];

s32 func_00179A70(u32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_UNK *var_a0;
    s32 *var_a0_2;
    s32 *var_a4;
    s32 var_a5;

    if (arg0 >= 8U) {
        var_a0 = ((void *)D_003CC718);
        goto block_16;
    }
    var_a5 = 0;
    var_a0_2 = ((void *)D_00510D20) + (arg0 * 0x48);
    var_a4 = var_a0_2;
    if (*var_a0_2 != 0) {
        var_a5 = 1;
loop_6:
        var_a0_2 += 0xC;
        var_a4 = var_a0_2;
        if (var_a5 < 6) {
            if (*var_a0_2 != 0) {
                var_a5 += 1;
                goto loop_6;
            }
            goto block_10;
        }
    } else {
block_10:
        M2C_FIELD(var_a0_2, s32 *, 0) = arg1;
        M2C_FIELD(var_a0_2, s32 *, 4) = arg2;
        if (arg3 == 0) {
            M2C_FIELD(var_a0_2, M2C_UNK **, 8) = ((void *)D_003CC740);
        } else {
            M2C_FIELD(var_a4, s32 *, 8) = arg3;
        }
    }
    if (var_a5 != 6) {
        return var_a5;
    }
    var_a0 = ((void *)D_003CC748);
block_16:
    func_00179788(var_a0);
    return -1;
}
