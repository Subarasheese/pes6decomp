/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_00237A70(s32 arg0) {
    s32 temp_v1;

    temp_v1 = arg0 & 0xFF;
    if ((temp_v1 != 8) && (temp_v1 != 0xA) && (temp_v1 != 9)) {
        return 0;
    }
    return 1;
}
