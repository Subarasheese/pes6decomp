/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"


void *func_00835E50();                              /* extern */

u16 func_00947570(void) {
    void *temp_v0;

    temp_v0 = func_00835E50();
    if (temp_v0 == 0) {
        return 0U;
    }
    return M2C_FIELD(temp_v0, u16 *, 0xC6);
}
