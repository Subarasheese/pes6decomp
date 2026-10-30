/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_00873FD0(s32 *, s32 *);                /* extern */
M2C_UNK func_00874460(s32 *);                       /* extern */
M2C_UNK func_00874470();                            /* extern */

s32 func_00870B60(s32 *arg0, s32 arg1) {
    s32 sp4C;
    s32 var_s0;
    void *temp_s2;
    void *temp_v1;

    if ((arg0 != NULL) && (arg1 != 0)) {
        if (*arg0 != 0x4512) {
            return -0x46;
        }
        func_00874470();
        func_00873FD0(arg0, &sp4C);
        func_00874460(arg0);
        var_s0 = 0;
        do {
            temp_v1 = arg1 + (var_s0 * 0x38);
            temp_s2 = temp_v1 + 0xC;
            if (M2C_FIELD(temp_v1, s32 *, 0xC) == sp4C) {
                func_001C48E8(temp_s2 + 5, 0, 0x31);
                M2C_FIELD(temp_s2, s8 *, 4) = 0;
                M2C_FIELD(temp_v1, s32 *, 0xC) = 0;
            }
            var_s0 += 1;
        } while (var_s0 < 0x46);
        return 0;
    }
    return -0x18;
}
