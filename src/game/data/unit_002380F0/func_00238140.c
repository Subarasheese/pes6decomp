/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
void *func_002293F0();                              /* extern */
s32 func_00231240();                                /* extern */

void func_00238140(s8 arg0) {
    void *temp_s0;

    temp_s0 = func_002293F0();
    if ((func_00231240() != 1) && (temp_s0 != NULL)) {
        M2C_FIELD(temp_s0, s8 *, 0x1365) = arg0;
    }
}
