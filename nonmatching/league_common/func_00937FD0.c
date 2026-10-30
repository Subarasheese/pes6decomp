/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00970870(s32, s32, s32);                   /* extern */
s8 func_00B2A780(s32);                              /* extern */
extern char D_00A64590[];

void func_00937FD0(M2C_UNK arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 var_a1;
    s32 var_a2;
    s32 var_s0;

    var_a1 = arg1;
    var_a2 = arg2;
    var_s0 = 0;
loop_1:
    temp_v0 = func_00970870(var_s0, var_a1, var_a2);
    if (temp_v0 != 0) {
        var_a2 = var_s0 & 0xFFFF;
        var_s0 = (var_s0 + 1) & 0xFFFF;
        var_a1 = var_a2 * 3;
        M2C_FIELD((((void *)D_00A64590) + var_a1), s8 *, 2) = func_00B2A780(temp_v0);
        if (var_s0 < 0x12B0) {
            goto loop_1;
        }
    }
}
