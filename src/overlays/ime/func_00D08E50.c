/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00D08E50(void *arg0, s8 arg1) {
    if (arg0 == NULL) {
        return 0;
    }
    M2C_FIELD(arg0, s8 *, 0x525) = 1;
    M2C_FIELD(arg0, s8 *, 0x526) = arg1;
    return 1;
}
