/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_00264F50(s32);                             /* extern */
M2C_UNK func_00265130(s32, s32, s32, M2C_UNK *, M2C_UNK); /* extern */
extern char D_00537990[];

void func_00209D20(s32 arg0, s32 arg1, s32 arg2, M2C_UNK **arg3) {
    func_00265130(arg0, arg2, func_00264F50(arg1), ((void *)D_00537990), 0);
    if (arg3 != NULL) {
        *arg3 = ((void *)D_00537990);
    }
}
