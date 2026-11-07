/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_00223BB0();                                /* extern */

void func_00221020(s32 arg0, s8 arg1) {
    s32 temp_v0;

    temp_v0 = func_00223BB0();
    if (arg0 < 0x24) {
        M2C_FIELD((arg0 + temp_v0), s8 *, 0x894) = arg1;
    }
}
