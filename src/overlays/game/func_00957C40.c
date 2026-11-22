/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

s32 func_00957C40(void *arg0) {
    u32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, u32 *, 0x1E0);
    switch (temp_v0) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
        return 1;
    default:
        return 0;
    }
}
