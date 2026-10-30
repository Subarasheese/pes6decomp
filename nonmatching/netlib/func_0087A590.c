/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_00873EE0(s32 *, s32, M2C_UNK);         /* extern */
M2C_UNK func_00874460(s32 *);                       /* extern */
M2C_UNK func_00874470(s32 *);                       /* extern */

s32 func_0087A590(s32 *arg0, s32 *arg1, s8 *arg2, s32 arg3, s32 *arg4, s8 *arg5) {
    if ((arg0 != NULL) && (arg1 != NULL) && (arg2 != NULL) && (arg3 != 0) && (arg4 != NULL) && (arg5 != NULL)) {
        if (*arg0 == 0x5035) {
            func_001C48E8(arg3, 0, 0x31);
            func_00874470(arg0);
            func_00873EE0(arg0, arg3, 0x30);
            func_00874460(arg0);
            *arg1 = 0;
            *arg2 = 0;
            *arg4 = 0;
            *arg5 = 0;
            return 0;
        }
        return -0x46;
    }
    return -0x18;
}
