/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"


void *func_00821780();                              /* extern */

s8 func_00930890(void) {
    void *temp_v0;

    temp_v0 = func_00821780();
    if (temp_v0 == 0) {
        return 0;
    }
    return M2C_FIELD(temp_v0, s8 *, 0x504);
}
