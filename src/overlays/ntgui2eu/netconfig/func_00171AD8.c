/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

s32 func_00171AD8(void *arg0) {
    if (arg0 == NULL) {
        return 0;
    }
    if (!(M2C_FIELD(arg0, s32 *, 0xCF8) != 1)) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0xCF8) = 1;
    return 1;
}
