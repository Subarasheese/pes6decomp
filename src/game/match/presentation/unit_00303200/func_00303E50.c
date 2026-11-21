/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00303E50(void *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x28) < M2C_FIELD(arg0, s32 *, 0x44))) {
        M2C_FIELD(arg0, s8 *, 0x57) = 1;
        return 1;
    }
    return 0;
}
