/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void *D_003EA980;

s32 func_00993A60(void) {
    if (D_003EA980 == NULL) {
        return 3;
    }
    return M2C_FIELD(D_003EA980, s32 *, 0x258);
}
