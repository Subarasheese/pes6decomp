/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
void *func_0022F150();                              /* extern */
s32 func_00231240();                                /* extern */

void func_00226670(s8 arg0) {
    void *temp_s0;

    temp_s0 = func_0022F150();
    if ((func_00231240() != 1) && (temp_s0 != NULL)) {
        M2C_FIELD(temp_s0, s8 *, 6) = arg0;
    }
}
