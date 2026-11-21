/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00D12AC0(void *arg0, s8 arg1) {
    if (arg0 == NULL) {
        return 2;
    }
    M2C_FIELD(arg0, s8 *, 0xD8E) = arg1;
    M2C_FIELD(arg0, s8 *, 0xD8C) = 1;
    return 0;
}
