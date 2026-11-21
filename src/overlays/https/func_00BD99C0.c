/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

void func_00BD99C0(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x10) != arg1) {
        M2C_FIELD(arg0, s32 *, 8) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
}
