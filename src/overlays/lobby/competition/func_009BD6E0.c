/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_009BD6E0(void *arg0) {
    if (arg0 == NULL) {
        return 5;
    }
    M2C_FIELD(arg0, s32 *, 0) = 2;
    M2C_FIELD(arg0, s8 *, 0x15) = 1;
    return 0;
}
