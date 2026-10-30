/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_00873EE0(s32 *, s32, M2C_UNK);         /* extern */
M2C_UNK func_00873F60(s32 *, s32 *);                /* extern */
M2C_UNK func_00873FD0(s32 *, s32 *);                /* extern */
M2C_UNK func_008740E0(s32 *, void *);               /* extern */
M2C_UNK func_00874120(s32 *, s32);                  /* extern */
M2C_UNK func_00874460(s32 *);                       /* extern */
M2C_UNK func_00874470();                            /* extern */

s32 func_00872870(s32 *arg0, s32 arg1, s32 *arg2, s32 arg3, void *arg4, void *arg5, s32 arg6, s32 arg7, s32 arg_sp0, void *arg_sp8, s32 arg_sp10) {
    s32 spAC;

    if ((arg0 != NULL) && (arg2 != NULL) && (arg3 != 0) && (arg4 != NULL) && (arg5 != NULL) && (arg6 != 0) && (arg7 != 0) && (arg_sp0 != 0) && (arg_sp8 != NULL) && (arg_sp10 != 0)) {
        if (*arg0 == 0x4101) {
            M2C_FIELD(arg_sp8, s8 *, 0) = 0;
            M2C_FIELD(arg_sp8, s8 *, 1) = 0;
            M2C_FIELD(arg_sp8, s8 *, 2) = 0;
            func_00874470();
            func_00873FD0(arg0, arg2);
            if (*arg2 != 0) {
                func_00874460(arg0);
                return 0;
            }
            func_00873F60(arg0, &spAC);
            func_001C48E8(arg3, 0, 0x20);
            func_00873EE0(arg0, arg3, 0x20);
            func_008740E0(arg0, arg4);
            func_00874120(arg0, arg6);
            func_00874120(arg0, arg7);
            func_00874120(arg0, arg_sp0);
            func_008740E0(arg0, arg5);
            func_001C48E8(arg_sp10, 0, 0x31);
            func_00873EE0(arg0, arg_sp10, 0x30);
            func_008740E0(arg0, arg_sp8);
            func_008740E0(arg0, arg_sp8 + 1);
            func_008740E0(arg0, arg_sp8 + 2);
            func_00874460(arg0);
            if (arg1 != spAC) {
                *arg2 = -0x10A;
            }
            return 0;
        }
        return -0x46;
    }
    return -0x18;
}
