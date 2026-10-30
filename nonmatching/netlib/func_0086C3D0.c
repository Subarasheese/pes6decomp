/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0086A8E0(s32);                         /* extern */
M2C_UNK func_00873FD0(s32 *, s32 *);                /* extern */
M2C_UNK func_00874120(s32 *, s8 *);                 /* extern */
M2C_UNK func_00874460(s32 *);                       /* extern */
M2C_UNK func_00874470();                            /* extern */

s32 func_0086C3D0(s32 *arg0, s32 *arg1, s32 arg2, s32 arg3) {
    s8 sp5E;
    s8 sp5F;
    s32 var_a0;
    void *temp_v1;

    sp5F = 0;
    sp5E = 0;
    if ((arg0 != NULL) && (arg1 != NULL) && (arg3 != 0)) {
        if (*arg0 != 0x4364) {
            return -0x46;
        }
        func_00874470();
        func_00873FD0(arg0, arg1);
        func_00874120(arg0, &sp5F);
        func_00874120(arg0, &sp5E);
        func_00874460(arg0);
        if ((*arg1 == 0) && (arg2 != 0)) {
            var_a0 = 0;
            do {
                temp_v1 = arg3 + (var_a0 * 0xB8);
                if (arg2 == M2C_FIELD(temp_v1, s32 *, 0)) {
                    M2C_FIELD(temp_v1, s8 *, 0x49) = sp5E;
                }
                var_a0 += 1;
            } while (var_a0 < 8);
        }
        func_0086A8E0(arg3);
        return 0;
    }
    return -0x18;
}
