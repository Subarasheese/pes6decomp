/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"


void *func_00835E50();                              /* extern */

s32 func_00947730(void) {
    void *temp_v0;

    temp_v0 = func_00835E50();
    if (temp_v0 == 0) {
        return 0;
    }
    return M2C_FIELD(temp_v0, s32 *, 0x80);
}
