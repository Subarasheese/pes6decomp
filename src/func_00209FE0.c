/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_00264F50(s32);                             /* extern */
M2C_UNK func_002653D0(s32, s32, s32, M2C_UNK *, s32); /* extern */
extern char D_005378E0[];

void func_00209FE0(s32 arg0, s32 arg1, s32 arg2, M2C_UNK **arg3, s32 arg4) {
    func_002653D0(arg0, arg2, func_00264F50(arg1), ((void *)D_005378E0), arg4);
    if (arg3 != NULL) {
        *arg3 = ((void *)D_005378E0);
    }
}
