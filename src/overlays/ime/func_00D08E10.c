/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00D08E10(void *arg0, s8 arg1) {
    if (arg0 == NULL) {
        return 0;
    }
    M2C_FIELD(arg0, s8 *, 0x52A) = arg1;
    M2C_FIELD(arg0, s8 *, 0x525) = 1;
    return 1;
}
