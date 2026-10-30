/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003E9DF8;

s32 func_00644390(void) {
    switch (D_003E9DF8) {                           /* irregular */
    case 16:
        return 0xB;
    case 15:
        return 0xC;
    case 40:
        return 0xA;
    case 10:
        return 9;
    case 9:
        return 8;
    case 8:
        return 7;
    case 7:
        return 1;
    case 5:
        return 5;
    case 3:
        return 4;
    case 2:
        return 3;
    case 1:
        return 3;
    case 39:
    case 38:
    case 37:
    case 36:
    case 35:
    case 34:
    case 33:
    case 11:
        return 0xA;
    case 14:
    case 13:
    case 12:
        return 2;
    default:
        return 0x10;
    }
}
