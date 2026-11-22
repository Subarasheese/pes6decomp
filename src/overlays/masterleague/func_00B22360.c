/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 *func_00994760(void);

s32 func_00B22360(void) {
    void *temp_v0;

    temp_v0 = func_00994760();
    if (temp_v0 == NULL) {
        return 0;
    }
    return M2C_FIELD(temp_v0, s32 *, 0x61ABC);
}
