/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_002C2970();                                /* extern */

s32 func_0030DAA0(s32 *arg0, s32 *arg1) {
    s32 temp_v1;

    temp_v1 = func_002C2970() & 0xFF;
    *arg0 = (temp_v1 >> 5) & 1;
    *arg1 = temp_v1 & 0x1F;
    return 1;
}
