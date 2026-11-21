/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void *D_003EA764;

s32 func_00C22810(void) {
    if (D_003EA764 == NULL) {
        return -1;
    }
    return M2C_FIELD(D_003EA764, u8 *, 4);
}
