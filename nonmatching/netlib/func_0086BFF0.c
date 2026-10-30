/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0086A8E0(void *, s32);                 /* extern */
M2C_UNK func_00873F60(s32 *, s32 *);                /* extern */
M2C_UNK func_00874120(s32 *, s8 *);                 /* extern */
M2C_UNK func_00874460(s32 *);                       /* extern */
M2C_UNK func_00874470();                            /* extern */

s32 func_0086BFF0(s32 *arg0, void *arg1) {
    s32 sp38;
    s8 sp3F;
    s32 var_a1;
    void *temp_a0;

    sp38 = 0;
    sp3F = 0;
    if ((arg0 != NULL) && (arg1 != NULL)) {
        if (*arg0 != 0x4368) {
            return -0x46;
        }
        func_00874470();
        func_00873F60(arg0, &sp38);
        func_00874120(arg0, &sp3F);
        func_00874460(arg0);
        var_a1 = 0;
        do {
            temp_a0 = arg1 + (var_a1 * 0xB8);
            if ((sp38 == M2C_FIELD(temp_a0, s32 *, 0)) && (sp38 != 0)) {
                M2C_FIELD(temp_a0, s8 *, 0x7F) = sp3F;
                M2C_FIELD(arg1, s32 *, 0x888) = sp38;
            }
            if (M2C_FIELD(temp_a0, s32 *, 0) == 0) {
                M2C_FIELD(temp_a0, s8 *, 0x7F) = 0;
            }
            var_a1 += 1;
        } while (var_a1 < 8);
        func_0086A8E0(arg1, var_a1);
        return 0;
    }
    return -0x18;
}
