/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00857B70(s32);                         /* extern */
M2C_UNK func_00873FD0(s32 *, s32 *);                /* extern */
M2C_UNK func_00874460(s32 *);                       /* extern */
M2C_UNK func_00874470();                            /* extern */

s32 func_0086D630(s32 *arg0, s32 *arg1, s32 arg2) {
    s32 var_a0;
    s32 var_s0;
    void *temp_s2;
    void *temp_v1;

    if ((arg0 != NULL) && (arg1 != NULL)) {
        if (*arg0 != 0x432B) {
            return -0x46;
        }
        func_00874470();
        func_00873FD0(arg0, arg1);
        func_00874460(arg0);
        if (*arg1 == 0) {
            var_s0 = 0;
            do {
                temp_s2 = arg2 + (var_s0 * 0x38);
                func_00857B70(temp_s2 + 0x5C8);
                var_s0 += 1;
                M2C_FIELD(temp_s2, s32 *, 0x5C4) = 0;
                M2C_FIELD(temp_s2, s32 *, 0x5C0) = 0;
            } while (var_s0 < 8);
            var_a0 = 0;
            do {
                temp_v1 = arg2 + (var_a0 * 8);
                var_a0 += 1;
                M2C_FIELD(temp_v1, s32 *, 0x780) = 0;
                M2C_FIELD(temp_v1, s8 *, 0x784) = 0;
                M2C_FIELD(temp_v1, s8 *, 0x785) = 0;
            } while (var_a0 < 8);
        }
        return 0;
    }
    return -0x18;
}
