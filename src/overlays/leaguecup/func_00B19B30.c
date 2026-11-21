/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00B19B30(void *arg0) {
    if (arg0 == NULL) {
        return 0;
    }
    return M2C_FIELD(arg0, s32 *, 0x2C) != 0;
}
