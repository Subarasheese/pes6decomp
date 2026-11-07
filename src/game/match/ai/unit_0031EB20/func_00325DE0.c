/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_00325DE0(void *arg0) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x2C);
    if ((temp_v1 != 0x29) && (temp_v1 != 0x36) && (temp_v1 != 0x34) && (temp_v1 != 0x32) && (temp_v1 != 0x2F)) {
        return 0;
    }
    return 1;
}
