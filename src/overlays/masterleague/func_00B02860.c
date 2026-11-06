/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"


void *func_00223E00();                              /* extern */

u8 func_00B02860(void) {
    void *temp_v0;

    temp_v0 = func_00223E00();
    if (temp_v0 == 0) {
        return 0U;
    }
    return M2C_FIELD(temp_v0, u8 *, 7);
}
