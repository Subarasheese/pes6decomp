/* compiler: ee-gcc-2.96 */
#include "pes6/m2c.h"

extern void * func_001B8400(s32, s32);

s32 func_001B8850(s32 arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = func_001B8400(arg0, 1);
    M2C_FIELD(temp_v0, s32 *, 0x14) = arg1;
    M2C_FIELD(temp_v0, s32 *, 0x10) = 1;
    return (s32) temp_v0;
}
