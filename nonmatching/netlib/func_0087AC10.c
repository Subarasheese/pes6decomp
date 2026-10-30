/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s32 *, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_00873F60(s32 *, s32 *);                /* extern */
M2C_UNK func_00873FD0(s32 *, s32 *);                /* extern */
M2C_UNK func_00874460(s32 *);                       /* extern */
M2C_UNK func_00874470();                            /* extern */

s32 func_0087AC10(s32 *arg0, s32 *arg1, s32 *arg2, s32 *arg3, s8 *arg4) {
    s32 sp6C;

    sp6C = 0;
    if ((arg0 != NULL) && (arg1 != NULL) && (arg2 != NULL) && (arg3 != NULL) && (arg4 != NULL)) {
        if (*arg0 != 0x50F1) {
            return -0x46;
        }
        func_00874470();
        func_00873FD0(arg0, arg1);
        if (*arg1 == 0) {
            func_00873F60(arg0, &sp6C);
            func_001C48E8(arg2, 0, 0x284);
            *arg3 = sp6C;
            *arg2 = sp6C;
            *arg4 = 3;
        }
        func_00874460(arg0);
        return 0;
    }
    return -0x18;
}
