/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

M2C_UNK func_00BBA7F0(s32);
s32 func_00BC0778(s32, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK);
M2C_UNK func_00BC0A88(s32);
extern char D_00C4BDD0[];

void func_00BBA788(s32 arg0) {
    if (arg0 != 0) {
        if (func_00BC0778(arg0 + 8, -1, 0xA, ((void *)D_00C4BDD0), 0xF2) <= 0) {
            func_00BBA7F0(arg0);
            func_00BC0A88(arg0);
        }
    }
}
