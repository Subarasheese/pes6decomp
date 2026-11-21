/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

s32 func_00BBE078(s32, M2C_UNK, M2C_UNK, s32);

s32 func_00BAE278(void *arg0, s32 arg1, s32 arg2) {
    if (arg1 == 1) {
        return func_00BBE078(M2C_FIELD(arg0, s32 *, 0x1C), 0x103, 0, arg2);
    }
    return 0x2722;
}
