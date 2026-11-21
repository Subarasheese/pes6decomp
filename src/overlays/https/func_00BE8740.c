/* compiler: ee-gcc-2.96-G0 */
#include "pes6/m2c.h"

extern s32 func_00BE7418(s32, s32, s32, s32, s32);

s32 func_00BE8740(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;

    if ((arg3 == 0) || (temp_v0 = M2C_FIELD(arg3, s32 *, 0), (temp_v0 == 0))) {
        return 0;
    }
    return func_00BE7418(arg0, arg1, arg2, temp_v0, M2C_FIELD(arg3, s32 *, 4));
}
