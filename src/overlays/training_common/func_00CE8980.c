/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void *D_003E7E28;

s32 func_00CE8980(void) {
    if (D_003E7E28 != NULL) {
        return M2C_FIELD(D_003E7E28, s32 *, 0x1D0);
    }
    return 0;
}
