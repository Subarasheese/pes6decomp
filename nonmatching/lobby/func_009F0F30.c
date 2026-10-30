/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00933490(s32);                             /* extern */
s32 func_009341B0();                                /* extern */
M2C_UNK func_009E0370(s32, s32);                    /* extern */
extern void *D_00A7E018;

s32 func_009F0F30(void) {
    s32 temp_a0;
    s32 temp_s2;
    s32 temp_v0;
    s32 var_s0;
    s32 var_s1;

    if (D_00A7E018 == NULL) {
        return 0;
    }
    temp_v0 = func_009341B0();
    if (temp_v0 < 0) {
        return 0;
    }
    if (temp_v0 < 0x33) {
        M2C_FIELD(D_00A7E018, s32 *, 4) = temp_v0;
        var_s0 = -1;
        var_s1 = 0;
loop_12:
        temp_a0 = M2C_FIELD(D_00A7E018, s32 *, 4);
        if (var_s1 < temp_a0) {
            temp_s2 = M2C_FIELD(D_00A7E018, s32 *, 8);
            if (temp_s2 == func_00933490(var_s1)) {
                var_s0 = var_s1;
            }
            var_s1 += 1;
            goto loop_12;
        }
        func_009E0370(temp_a0, var_s0);
        return 1;
    }
    return 0;
}
