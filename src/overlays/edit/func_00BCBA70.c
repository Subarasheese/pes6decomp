/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00BCBA70(void *arg0) {
    if (arg0 != NULL) {
        return M2C_FIELD(arg0, u8 *, 0x59) & 0x7F;
    }
    return 0;
}
