/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_003413D0(void *arg0) {
    u8 value;

    if (NULL == arg0) {
        return 0;
    }
    if (1 != M2C_FIELD(arg0, s32 *, 0)) {
        return 0;
    }
    value = M2C_FIELD(arg0, u8 *, 0x21);
    switch (value) {
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
        return 0;
    default:
        return 1;
    }
}
