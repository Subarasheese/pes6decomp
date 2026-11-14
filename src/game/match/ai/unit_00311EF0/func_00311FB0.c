/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00BEC520();

s32 func_00311FB0(u8 *arg0) {
    u8 temp_v1;

    temp_v1 = func_00BEC520();
    if ((temp_v1 == 0) || (temp_v1 >= 0x17)) {
        *arg0 = 0xFF;
        return 0;
    }
    *arg0 = temp_v1;
    return 1;
}
