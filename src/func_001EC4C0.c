/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

s32 func_001EC4C0(void *object, s32 arg1, s32 arg2) {
    if ((object != NULL) && (arg1 != 0) && (arg2 != 0)) {
        M2C_FIELD(object, s32 *, 4) = arg1;
        M2C_FIELD(object, s32 *, 8) = arg2;
        return 1;
    }
    return 0;
}
