/* compiler: ee-gcc-2.96-G0 */
#include "pes6/m2c.h"

extern void *D_00CCBE04;

u8 func_00C76F60(void) {
    if (D_00CCBE04 != NULL) {
        return M2C_FIELD(D_00CCBE04, u8 *, 0x10);
    }
    return 0U;
}
