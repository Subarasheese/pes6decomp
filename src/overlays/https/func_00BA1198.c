/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

void func_00BA1198(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, s32 *, 0) = arg2;
    M2C_FIELD(arg0, s32 *, 4) = arg3;
    if (arg1 == 0) {
        M2C_FIELD(arg0, s32 *, 0xC) = 2;
    } else {
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
    }
    M2C_FIELD(arg0, s32 *, 8) = arg1;
}
