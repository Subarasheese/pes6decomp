/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */

s32 func_0030D330(s32 arg0) {
    s32 temp_s0;

    temp_s0 = arg0 & 0x1000;
    if (temp_s0 != 0) {
        func_0026E840(0x84008401);
    }
    return temp_s0;
}
