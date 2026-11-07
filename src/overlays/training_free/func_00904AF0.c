/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"


s32 func_00904AF0(void *arg0) {
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 0x1DD);
    switch (temp_v1) {                              /* irregular */
    case 9:
    case 10:
    case 11:
        return 1;
    case 13:
    case 15:
    case 16:
    case 17:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 19:
    case 28:
    case 20:
    case 18:
    case 32:
    case 1:
    case 2:
    case 6:
        return 2;
    default:
        return 0;
    }
}
