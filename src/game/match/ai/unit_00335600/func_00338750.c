/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00338750(void *obj, s32 value) {
    if (obj == NULL) {
        return 0;
    }
    M2C_FIELD(obj, s32 *, 0x1C) = value;
    return 1;
}
