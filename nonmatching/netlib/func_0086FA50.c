/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0086A8E0(s32);                         /* extern */
M2C_UNK func_00873FD0(s32 *, s32 *);                /* extern */
M2C_UNK func_00874460(s32 *);                       /* extern */
M2C_UNK func_00874470();                            /* extern */

s32 func_0086FA50(s32 *arg0, s32 *arg1, s32 arg2, s32 arg3) {
    s32 var_a1;
    void *temp_a0;

    if ((arg0 != NULL) && (arg1 != NULL) && (arg2 != 0)) {
        if (*arg0 != 0x4311) {
            return -0x46;
        }
        func_00874470();
        func_00873FD0(arg0, arg1);
        func_00874460(arg0);
        if (*arg1 == 0) {
            var_a1 = 0;
            do {
                temp_a0 = arg2 + (var_a1 * 0xB8);
                if (arg3 == M2C_FIELD(temp_a0, s32 *, 0)) {
                    M2C_FIELD(temp_a0, s8 *, 0xB6) = 1;
                }
                var_a1 += 1;
            } while (var_a1 < 8);
        }
        func_0086A8E0(arg2);
        return 0;
    }
    return -0x18;
}
