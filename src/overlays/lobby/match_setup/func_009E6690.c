/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_009E6690(void *arg0) {
    s32 (*temp_v0)(s32);

    temp_v0 = M2C_FIELD(arg0, s32(**)(s32), 0x10);
    if (temp_v0 == NULL) {
        return 0;
    }
    return temp_v0(M2C_FIELD(arg0, s32 *, 0));
}
