/* compiler: ee-gcc-2.96-G0 */
#include "pes6/m2c.h"

extern void *D_00A7DD40;

s32 func_009BF8E0(void) {
    if (D_00A7DD40 != NULL) {
        return M2C_FIELD(D_00A7DD40, s32 *, 0xA0);
    }
    return 0;
}
