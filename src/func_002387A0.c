/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_00229460();                                /* extern */
s32 func_00231240();                                /* extern */

void func_002387A0(s32 arg0, s8 arg1) {
    s32 temp_s0;
    s32 temp_v1;

    temp_s0 = func_00229460();
    if ((func_00231240() != 1) && (temp_s0 != 0)) {
        temp_v1 = arg0 & 0xFF;
        if (temp_v1 < 8) {
            M2C_FIELD((temp_v1 + temp_s0), s8 *, 0x4616) = arg1;
        }
    }
}
