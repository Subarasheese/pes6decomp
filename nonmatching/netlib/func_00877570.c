/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_00873CF0(s32, M2C_UNK);                /* extern */
M2C_UNK func_00873EE0(s32 *, s32, M2C_UNK);         /* extern */
M2C_UNK func_00873F60(s32 *, s32);                  /* extern */
M2C_UNK func_00873FD0(s32 *, s32 *);                /* extern */
M2C_UNK func_00874460(s32 *);                       /* extern */
M2C_UNK func_00874470(s32 *);                       /* extern */

s32 func_00877570(s32 arg0, s32 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 *arg5) {
    if ((arg1 != NULL) && (arg2 != 0) && (arg3 != 0) && (arg5 != NULL)) {
        if (*arg1 == 0x3008) {
            func_00873CF0(arg0 + 0x37E0, 1);
            func_00874470(arg1);
            func_00873FD0(arg1, arg5);
            if (*arg5 == 0) {
                func_001C48E8(arg3, 0, 0x11);
                func_001C48E8(arg4, 0, 0x11);
                func_00873F60(arg1, arg2);
                func_00873EE0(arg1, arg3, 0x10);
                func_00873EE0(arg1, arg4, 0x10);
                func_00874460(arg1);
            } else {
                func_00874460(arg1);
            }
            return 0;
        }
        return -0x46;
    }
    return -0x18;
}
