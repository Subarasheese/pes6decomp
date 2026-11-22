/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

s32 func_00BCD070(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x18) = 3;
    if (arg1 < 0) {
        return arg1;
    }
    M2C_FIELD(arg0, s32 *, 0x40) = (s32)(M2C_FIELD(arg0, s32 *, 0x40) + arg1);
    return 0;
}
