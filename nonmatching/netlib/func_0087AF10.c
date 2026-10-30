/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00873F60(s32 *, void *);               /* extern */
M2C_UNK func_00873FD0(s32 *, s32 *);                /* extern */
M2C_UNK func_00874460(s32 *);                       /* extern */
M2C_UNK func_00874470();                            /* extern */

s32 func_0087AF10(s32 *arg0, s32 *arg1, void *arg2) {
    s32 temp_s1;

    if ((arg0 != NULL) && (arg1 != NULL) && (arg2 != NULL)) {
        if (*arg0 != 0x5027) {
            return -0x46;
        }
        func_00874470();
        func_00873FD0(arg0, arg1);
        if (*arg1 == 0) {
            temp_s1 = M2C_FIELD(arg2, s32 *, 0x7B78);
            func_001C48E8(arg2, 0, 0x7B7C);
            M2C_FIELD(arg2, s32 *, 0x7B70) = 0;
            func_00873F60(arg0, arg2 + 0x7B74);
            M2C_FIELD(arg2, s32 *, 0x7B78) = temp_s1;
        }
        func_00874460(arg0);
        return 0;
    }
    return -0x18;
}
