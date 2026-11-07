/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
void *func_00229280(s32);                           /* extern */
s32 func_00231240();                                /* extern */

void func_002386F0(s32 arg0, s8 arg1) {
    void *temp_s0;

    temp_s0 = func_00229280(arg0 & 0xFF);
    if ((func_00231240() != 1) && (temp_s0 != NULL)) {
        M2C_FIELD(temp_s0, s8 *, 8) = arg1;
    }
}
