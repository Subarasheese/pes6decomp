/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00D10EB0(void *arg0, s32 arg1) {
    if (arg0 == NULL) {
        return 1;
    }
    M2C_FIELD(arg0, s32 *, 0x14) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s8 *, 0x3D) = 1;
    return 0;
}
