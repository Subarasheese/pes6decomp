/* compiler: ee-gcc-2.96-G0 */
#include "pes6/m2c.h"

extern void *D_00A7DC10;

s32 func_009B8390(void) {
    if (D_00A7DC10 != NULL) {
        return M2C_FIELD(D_00A7DC10, s32 *, 0x64);
    }
    return 0;
}
