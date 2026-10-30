/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00162E20(s8 *, s32, s32, s32, s32, s32, s32, s32); /* extern */
extern char D_00383D04[];
extern char D_00383D08[];
extern char D_00383D20[];

s8 *func_00162F28(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_a1;
    s32 var_v1;
    s8 *var_s0;
    s8 *var_v0;

    var_s0 = NULL;
    var_a1 = 0;
    if (M2C_FIELD(((void *)D_00383D08), s32 *, 0) > 0) {
        var_s0 = ((*(s32 *)D_00383D04) * 0x60) + ((void *)D_00383D20);
        var_v1 = M2C_FIELD(((void *)D_00383D08), s32 *, 0);
        if (*var_s0 != 0) {
loop_3:
            var_a1 += 1;
            var_v1 = M2C_FIELD(((void *)D_00383D08), s32 *, 0x3D08);
            if (var_a1 < M2C_FIELD(((void *)D_00383D08), s32 *, 0)) {
                var_s0 = (((*(s32 *)D_00383D04) + var_a1) * 0x60) + ((void *)D_00383D20);
                if (*var_s0 == 0) {
                    goto block_5;
                }
                goto loop_3;
            }
        }
    } else {
block_5:
        var_v1 = M2C_FIELD(((void *)D_00383D08), s32 *, 0x3D08);
    }
    var_v0 = NULL;
    if (var_a1 != var_v1) {
        func_00162E20(var_s0, arg0, arg1, arg2, arg3, M2C_FIELD(((void *)D_00383D08), s32 *, 0), arg1, arg2);
        M2C_FIELD(var_s0, s8 *, 3) = 1;
        var_v0 = var_s0;
    }
    return var_v0;
}
