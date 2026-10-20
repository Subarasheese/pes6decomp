/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_00325E40(void *arg0) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x2C);
    if ((temp_v1 != 0x2D) && (temp_v1 != 0x2C) && (temp_v1 != 9) && (temp_v1 != 0) && (temp_v1 != 0x39) && (temp_v1 != 0x38)) {
        return 0;
    }
    return 1;
}
