/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001C4730(s32, s32 *, M2C_UNK);         /* extern */
M2C_UNK func_001C48E8(s32 *, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_00873EE0(s32 *, s32 *, M2C_UNK);       /* extern */
M2C_UNK func_00873F60(s32 *, s32 *);                /* extern */
M2C_UNK func_00873FD0(s32 *, s32 *);                /* extern */
M2C_UNK func_00874040(s32 *, void *);               /* extern */
M2C_UNK func_008740E0(s32 *, void *);               /* extern */
M2C_UNK func_00874120(s32 *, void *);               /* extern */
M2C_UNK func_00874460(s32 *);                       /* extern */
M2C_UNK func_00874470(s32 *);                       /* extern */

s32 func_0087AFE0(s32 *arg0, s32 *arg1, s32 *arg2, s32 arg3, s32 arg4) {
    if ((arg0 != NULL) && (arg1 != NULL) && (arg2 != NULL) && (arg4 != 0)) {
        if (*arg0 == 0x5025) {
            func_001C48E8(arg2, 0, 0x284);
            func_00874470(arg0);
            func_00873FD0(arg0, arg1);
            if (*arg1 == 0) {
                func_00873F60(arg0, arg2);
                func_00873EE0(arg0, arg2 + 0x14, 0x30);
                func_00873F60(arg0, arg2 + 8);
                func_00873F60(arg0, arg2 + 0xC);
                func_00874040(arg0, arg2 + 0x282);
                func_00874040(arg0, arg2 + 0x17E);
                func_00874040(arg0, arg2 + 0x7A);
                func_00874040(arg0, arg2 + 0x46);
                func_00873F60(arg0, arg2 + 4);
                func_00873EE0(arg0, arg2 + 0x48, 0x30);
                func_008740E0(arg0, arg2 + 0x45);
                func_008740E0(arg0, arg2 + 0x79);
                func_00873F60(arg0, arg2 + 0x10);
                func_00874120(arg0, arg2 + 0x17D);
                func_00873EE0(arg0, arg2 + 0x180, 0x100);
                func_00873EE0(arg0, arg2 + 0x7C, 0x100);
                if (arg3 == *arg2) {
                    func_001C4730(arg4, arg2, 0x284);
                }
            }
            func_00874460(arg0);
            return 0;
        }
        return -0x46;
    }
    return -0x18;
}
