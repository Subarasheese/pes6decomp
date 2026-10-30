/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00874040(void *, u16 *);               /* extern */
M2C_UNK func_00874120(void *, s8 *);                /* extern */
M2C_UNK func_00874460(void *);                      /* extern */
M2C_UNK func_00874470();                            /* extern */

s32 func_008668A0(void *arg0, s32 arg1) {
    u16 sp5C;
    s8 sp5F;
    s32 *temp_v1;
    s32 var_s0;
    s32 var_s1;
    void *temp_v0;

    if (arg0 != NULL) {
        if (M2C_FIELD(arg0, s32 *, 0) != 0x3134) {
            return -0x46;
        }
        func_00874470();
        var_s1 = 0;
        var_s0 = 0;
loop_6:
        if (var_s1 < M2C_FIELD(arg0, s32 *, 4)) {
            func_00874040(arg0, &sp5C);
            func_00874120(arg0, &sp5F);
            temp_v1 = arg1 + (var_s0 * 4);
            var_s1 += 3;
            temp_v0 = arg1 + var_s0;
            var_s0 += 1;
            *temp_v1 = (s32) sp5C;
            M2C_FIELD(temp_v0, s8 *, 0x200) = sp5F;
            goto loop_6;
        }
        func_00874460(arg0);
        return 0;
    }
    return -0x18;
}
