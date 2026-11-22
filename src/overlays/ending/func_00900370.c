/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void *D_003EA6AC;

s32 func_00900370(void) {
    if (D_003EA6AC != NULL) {
        return M2C_FIELD(D_003EA6AC, s32 *, 0x4);
    }
    return 0;
}
