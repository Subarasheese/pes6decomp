/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

s32 func_00BA29D8(s32);
M2C_UNK func_00BA2B20(s32);
M2C_UNK func_00BA2E98(s32, s8 *, s32);
extern s32 *func_00BA9C90(void);
s32 func_00BDB408(s32, s32);
s32 func_00BDD038(s32);

s8 *func_00BDCEB8(s32 arg0, s8 *arg1, s32 arg2) {
    s32 temp_v0;

    *arg1 = 0;
    temp_v0 = func_00BA29D8(func_00BA9C90());
    if (temp_v0 != 0) {
        if (func_00BDB408(temp_v0, func_00BDD038(arg0)) != 0) {
            func_00BA2E98(temp_v0, arg1, arg2);
            func_00BA2B20(temp_v0);
            return arg1;
        }
        func_00BA2B20(temp_v0);
        return NULL;
    }
    return NULL;
}
