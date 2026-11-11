/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK SD_call(M2C_UNK);                     /* extern */

s32 func_0030D330(s32 arg0) {
    s32 temp_s0;

    temp_s0 = arg0 & 0x1000;
    if (temp_s0 != 0) {
        SD_call(0x84008401);
    }
    return temp_s0;
}
