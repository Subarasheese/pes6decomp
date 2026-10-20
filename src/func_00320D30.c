/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_00320D30(void *arg0) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x2C);
    if ((temp_v1 != 0x37) && (temp_v1 != 0x35) && (temp_v1 != 0x33) && (temp_v1 != 0x31) && (temp_v1 != 0x30)) {
        return 0;
    }
    return 1;
}
