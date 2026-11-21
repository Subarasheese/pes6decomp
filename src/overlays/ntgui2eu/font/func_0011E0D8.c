/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

s32 func_0011E0D8(s32 arg0, void *arg1) {
    s32 value;
    s32 value2;

    value2 = -1;
    for (;;) {
        value = M2C_FIELD(arg1, s32(**)(s32), 0)(arg0);
        if (!(value > 0)) {
            break;
        } else {
            if (M2C_FIELD(arg1, s32(**)(s32, s32), 8)(arg0, value) != -1) {
                value2 = 1;
                continue;
            }
            M2C_FIELD(arg1, s32(**)(s32), 4)(arg0);
            return value2;
        }
    }
    return 0;
}
