/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void *D_003E7B0C;

u8 func_0094C730(void) {
    if (D_003E7B0C != NULL) {
        return M2C_FIELD(D_003E7B0C, u8 *, 0x1);
    }
    return 0U;
}
