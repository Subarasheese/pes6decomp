/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_00326350(void *arg0) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x2C);
    if ((temp_v1 != 0x25) && (temp_v1 != 7) && (temp_v1 != 0x38) && (temp_v1 != 0x2C) && (temp_v1 != 0)) {
        return 0;
    }
    return 1;
}
