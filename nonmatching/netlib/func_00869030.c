/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0086A8E0(void *);                      /* extern */
M2C_UNK func_00874120(s32 *, s8 *);                 /* extern */
M2C_UNK func_00874460(s32 *);                       /* extern */
M2C_UNK func_00874470();                            /* extern */

s32 func_00869030(s32 *arg0, s8 *arg1, void *arg2) {
    s32 var_a0;

    if ((arg0 != NULL) && (arg1 != NULL) && (arg2 != NULL)) {
        if (*arg0 != 0x6073) {
            return -0x46;
        }
        func_00874470();
        func_00874120(arg0, arg1);
        func_00874460(arg0);
        var_a0 = 0;
        do {
            M2C_FIELD((arg2 + var_a0), s8 *, 0x8EC) = 6;
            var_a0 += 1;
        } while (var_a0 < 4);
        M2C_FIELD(arg2, s8 *, 0x8D6) = (s8) *arg1;
        func_0086A8E0(arg2);
        return 0;
    }
    return -0x18;
}
