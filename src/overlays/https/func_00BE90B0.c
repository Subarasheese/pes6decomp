/* compiler: ee-gcc-2.96-G0 */
#include "pes6/m2c.h"

extern s32 func_00BE7418(s32, s32, s32, s32, s32);

s32 func_00BE90B0(s32 arg0, s32 arg1, s32 arg2, void *arg3) {
    return func_00BE7418(arg0, 0x100, arg2, M2C_FIELD(arg3, s32 *, 0), M2C_FIELD(arg3, s32 *, 4));
}
