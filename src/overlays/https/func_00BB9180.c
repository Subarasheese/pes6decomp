/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

s32 func_00BA0E28(s32, s32, s64 *, s32);
s64 func_00BA1820(s32);

s32 func_00BB9180(void *arg0, s32 arg1, s64 *arg2, s32 arg3) {
    s64 temp_v0;

    temp_v0 = func_00BA1820(M2C_FIELD(arg0, s32 *, 0x10));
    if (arg2 != NULL) {
        *arg2 = temp_v0;
    }
    if (arg1 == 0) {
        return 0;
    }
    return func_00BA0E28(M2C_FIELD(arg0, s32 *, 0x10), arg1, arg2, arg3);
}
