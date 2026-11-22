/* compiler: ee-gcc-2.96-G0 */
#include "pes6/m2c.h"

extern s32 func_00BE9B10(s32, s32, s32);

s32 func_00BE8F68(s32 arg0, s32 arg1) {
    return func_00BE9B10(arg1, M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(arg0, s32 *, 0x10));
}
