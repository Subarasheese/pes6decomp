/* compiler: ee-gcc-2.9-Os-G0 */
#include "pes6/m2c.h"


extern void *D_00A7E018;

s32 func_009F0C00(void) {
    return M2C_FIELD(D_00A7E018, u8 *, 1) != 0;
}
