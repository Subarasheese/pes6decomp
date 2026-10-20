/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_003263A0(void *arg0) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x2C);
    if ((temp_v1 != 5) && (temp_v1 != 0xC) && (temp_v1 != 0xB)) {
        return 0;
    }
    return 1;
}
