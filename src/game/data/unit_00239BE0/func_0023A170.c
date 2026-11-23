/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_00226710(void);

s32 func_0023A170(void) {
    u8 kind = func_00226710();
    switch (kind) {
    default:
        return 0;
    case 2:
    case 3:
    case 4:
    case 5:
    case 8:
    case 9:
    case 10:
    case 58:
    case 12:
    case 14:
    case 17:
    case 19:
    case 21:
    case 23:
    case 25:
    case 27:
    case 29:
    case 33:
    case 38:
    case 39:
    case 28:
    case 32:
    case 45:
    case 57:
        return 1;
    case 11:
    case 13:
    case 15:
    case 18:
    case 20:
    case 22:
    case 24:
    case 26:
        return 0;
    }
}
