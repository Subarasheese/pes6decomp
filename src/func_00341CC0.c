/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_00341CC0(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v1;

    temp_v1 = arg0 & 0xFFFF;
    if (((arg1 & 0xFFFF) < temp_v1) && (temp_v1 < (arg2 & 0xFFFF))) {
        return 1;
    }
    return 0;
}
