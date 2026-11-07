/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_002EC130(void *arg0, s32 arg1) {
    if ((arg1 == 0) && (M2C_FIELD(arg0, s32 *, 0x18FC) == 1)) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0x190C) = arg1;
    return 1;
}
