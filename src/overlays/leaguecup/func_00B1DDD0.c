/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void *D_003EAD88;

s32 func_00B1DDD0(void) {
    if (D_003EAD88 == NULL) {
        return 0;
    }
    return M2C_FIELD(D_003EAD88, s32 *, 0xA8) == 0;
}
