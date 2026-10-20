/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_0021FB90(s32);                             /* extern */
s32 func_00264F50(s32);                             /* extern */
M2C_UNK func_00265130(s32, s32, s32, M2C_UNK *, M2C_UNK); /* extern */
extern char D_005379C0[];

void func_00209CA0(s32 arg0, s32 arg1, s32 arg2, M2C_UNK **arg3) {
    s32 temp_s0;

    temp_s0 = func_00264F50(arg1);
    func_00265130(arg0, func_0021FB90(arg2), temp_s0, ((void *)D_005379C0), 0);
    if (arg3 != NULL) {
        *arg3 = ((void *)D_005379C0);
    }
}
