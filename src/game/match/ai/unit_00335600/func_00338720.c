/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00338720(u8 *obj, s32 value) {
    if (obj == NULL) {
        return 0;
    }
    obj[0x1B] = 1;
    M2C_FIELD(obj, s32 *, 0x20) = value + 1;
    return 1;
}
