/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00376910[];
extern char D_00376960[];
extern char D_003769B0[];
extern char D_00376A00[];

s32 func_00151BE0(s32 arg0, s32 arg1, s32 arg2, M2C_UNK *arg3) {
    M2C_UNK *var_a3;
    M2C_UNK *var_v1;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a0;

    var_a3 = arg3;
    switch (arg0) {                                 /* irregular */
    case 1:
    case 0:
        var_a3 = ((void *)D_00376910);
        break;
    case 10:
    case 2:
        var_a3 = ((void *)D_00376960);
        break;
    case 19:
        var_a3 = ((void *)D_003769B0);
        break;
    case 20:
        var_a3 = ((void *)D_00376A00);
        break;
    }
    var_a0 = 0;
    var_v1 = var_a3;
loop_12:
    if ((M2C_FIELD(var_v1, s32 *, 0) < arg1) || (M2C_FIELD(var_v1, s32 *, 4) < arg2)) {
        var_a0 += 1;
        var_v1 += 0xC;
        if (var_a0 < 6) {
            goto loop_12;
        }
    }
    if (var_a0 >= 6) {
        temp_v1 = M2C_FIELD(var_a3, s32 *, 0x3C);
        temp_v1_2 = M2C_FIELD(var_a3, s32 *, 0x40);
        return (((s32) ((arg1 + temp_v1) - 1) / temp_v1) * ((s32) ((arg2 + temp_v1_2) - 1) / temp_v1_2)) << 5;
    }
    return M2C_FIELD(((var_a0 * 0xC) + var_a3), s32 *, 8);
}
