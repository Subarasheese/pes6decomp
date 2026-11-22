/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

s32 func_00BBFE50(s32, M2C_UNK, s32, M2C_UNK, s32, s32, M2C_UNK);

s32 func_00BC6898(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    return func_00BBFE50(M2C_FIELD(arg0, s32 *, 4), 0x10, arg1, 0, arg2, arg3, 0x12) == 0;
}
