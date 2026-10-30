/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_00873FD0(s32 *, s32 *);                /* extern */
M2C_UNK func_00874460(s32 *);                       /* extern */
M2C_UNK func_00874470();                            /* extern */

s32 func_0087AAB0(s32 *arg0, s32 *arg1, s32 arg2, s32 *arg3, s8 *arg4, s32 arg5) {
    if ((arg0 != NULL) && (arg1 != NULL) && (arg2 != 0) && (arg3 != NULL) && (arg4 != NULL) && (arg5 != 0)) {
        if (*arg0 != 0x50C1) {
            return -0x46;
        }
        func_00874470();
        func_00873FD0(arg0, arg1);
        func_00874460(arg0);
        if (*arg1 == 0) {
            func_001C48E8(arg2, 0, 0x284);
            func_001C48E8(arg5, 0, 0x1774);
            *arg3 = 0;
            *arg4 = 0;
        }
        return 0;
    }
    return -0x18;
}
