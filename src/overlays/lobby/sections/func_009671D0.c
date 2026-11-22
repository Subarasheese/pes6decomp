/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void *D_003EAC98;

s32 func_009671D0(void) {
    if (D_003EAC98 != NULL) {
        return M2C_FIELD(D_003EAC98, s32 *, 0x1C);
    }
    return 0;
}
