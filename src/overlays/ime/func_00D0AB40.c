/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00D0AB40(void *arg0, s8 arg1) {
    if (arg0 == NULL) {
        return 1;
    }
    M2C_FIELD(arg0, s8 *, 0xD7D) = arg1;
    M2C_FIELD(arg0, s8 *, 0xD7A) = 1;
    return 0;
}
