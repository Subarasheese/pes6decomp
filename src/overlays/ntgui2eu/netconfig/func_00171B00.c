/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

s32 func_00171B00(void *arg0) {
    if (arg0 == NULL) {
        return 0;
    }
    if (!(M2C_FIELD(arg0, s32 *, 0xCF8) != 0)) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0xCF8) = 0;
    return 1;
}
