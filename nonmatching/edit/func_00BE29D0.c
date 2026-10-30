/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBE0F0[];

s32 func_00BE29D0(s32 arg0) {
    M2C_UNK *var_a3;
    s32 *var_a2;
    s32 temp_a1;
    s32 var_a4;
    s32 var_v0;

    var_v0 = 0;
    var_a3 = ((void *)D_00CBE0F0);
loop_1:
    temp_a1 = M2C_FIELD(var_a3, s32 *, 4);
    var_a4 = 0;
    if (temp_a1 > 0) {
        var_a2 = M2C_FIELD(var_a3, s32 **, 0);
loop_3:
        if (arg0 != *var_a2) {
            var_a4 += 1;
            var_a2 += 4;
            if (var_a4 >= temp_a1) {
                goto block_8;
            }
            goto loop_3;
        }
        return var_v0;
    }
block_8:
    var_v0 += 1;
    var_a3 += 8;
    if (var_v0 >= 6) {
        return 0;
    }
    goto loop_1;
}
