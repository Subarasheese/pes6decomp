/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001D6E70(s32, s32, s32);
M2C_UNK vsprintf(M2C_UNK *, s64, s32);         /* extern */
extern char D_00A7D900[];

s32 func_0099B5D0(s32 arg0, s32 arg1, s64 arg2, s64 arg3, s64 arg4, s64 arg5, s64 arg6, s64 arg7, M2C_UNK arg_sp0) {
    s64 sp78;
    s64 sp80;
    s64 sp88;
    s64 sp90;
    s64 sp98;
    s32 var_v1;

    sp78 = arg3;
    sp80 = arg4;
    sp88 = arg5;
    sp90 = arg6;
    sp98 = arg7;
    if (arg0 == 0) {
        return 0;
    }
    if (arg2 != 0) {
        if (3 >= 8) {
            var_v1 = 0;
        } else {
            var_v1 = (8 - 3) * 8;
        }
        vsprintf(((void *)D_00A7D900), (s64) (arg2 << 0x20) >> 0x20, &arg_sp0 - var_v1);
        return func_001D6E70(arg0, arg1, (s32) ((void *)D_00A7D900));
    }
    return 0;
}
