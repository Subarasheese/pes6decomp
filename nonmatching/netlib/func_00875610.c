/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00873F60(s32 *, s32);                  /* extern */
M2C_UNK func_008740E0(s32 *, s32);                  /* extern */
M2C_UNK func_00874460(s32 *);                       /* extern */
M2C_UNK func_00874470();                            /* extern */

s32 func_00875610(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    if ((arg0 != NULL) && (arg1 != 0) && (arg2 != 0) && (arg3 != 0) && (arg4 != 0)) {
        if (*arg0 != 0x9302) {
            return -0x46;
        }
        func_00874470();
        func_008740E0(arg0, arg1);
        func_00873F60(arg0, arg2);
        func_008740E0(arg0, arg3);
        func_00873F60(arg0, arg4);
        func_00873F60(arg0, arg5);
        func_00873F60(arg0, arg6);
        func_00874460(arg0);
        return 0;
    }
    return -0x18;
}
