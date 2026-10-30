/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00904AF0(void *arg0) {
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 0x1DD);
    switch (temp_v1) {                              /* irregular */
    case 11:
    case 10:
    case 9:
        return 1;
    case 6:
    case 2:
    case 1:
    case 32:
    case 18:
    case 20:
    case 28:
    case 19:
    case 26:
    case 25:
    case 24:
    case 23:
    case 22:
    case 17:
    case 16:
    case 15:
    case 13:
        return 2;
    default:
        return 0;
    }
}
