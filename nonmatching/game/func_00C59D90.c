/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BC8BC0();                                /* extern */
u32 func_00C136E0(u32, M2C_UNK);                    /* extern */
u32 func_00C137D0(s32);                             /* extern */
extern char D_00CCB9D0[];

u32 func_00C59D90(s32 arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_s4;
    u32 var_s0;
    u32 var_s1;
    u32 var_s5;

    var_s1 = -1U;
    temp_s4 = arg0 & 0xFF;
    if (temp_s4 < (func_00BC8BC0() & 0xFF)) {
        var_s0 = -1U;
        if (temp_s4 < (func_00BC8BC0() & 0xFF)) {
            temp_a0 = M2C_FIELD(((temp_s4 * 0xC) + ((void *)D_00CCB9D0)), s32 *, 8);
            if (temp_a0 >= 0) {
                var_s0 = func_00C137D0(temp_a0);
            }
        }
        var_s5 = -1U;
        if (temp_s4 < (func_00BC8BC0() & 0xFF)) {
            temp_a0_2 = M2C_FIELD((((arg0 & 0xFF) * 0xC) + ((void *)D_00CCB9D0)), s32 *, 4);
            if (temp_a0_2 >= 0) {
                var_s5 = func_00C137D0(temp_a0_2);
            }
        }
        if ((var_s0 != -1U) && (var_s5 != -1U) && ((var_s1 = func_00C136E0(var_s5, 0xA), (var_s1 == -1U)) || (var_s1 < var_s0))) {
            var_s1 = -1U;
        }
    }
    return var_s1;
}
