/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"


void *func_00835E50();                              /* extern */

s16 func_009477C0(void) {
    void *temp_v0;

    temp_v0 = func_00835E50();
    if (temp_v0 == 0) {
        return 0;
    }
    return M2C_FIELD(temp_v0, s16 *, 0x36);
}
